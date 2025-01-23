#include "power_settings.h"
#include "power_settings_filename.h"

#include <saved_struct.h>
#include <storage/storage.h>

#define TAG "PowerSettings"

#define POWER_SETTINGS_VER_0 (0) // OLD version number
#define POWER_SETTINGS_VER   (1) // NEW actual version nnumber

#define POWER_SETTINGS_PATH  INT_PATH(POWER_SETTINGS_FILE_NAME)
#define POWER_SETTINGS_MAGIC (0x18)

typedef struct {
    //inital set - empty
} PowerSettingsV0;

void power_settings_load(PowerSettings* settings) {
    furi_assert(settings);

    bool success = false;

    do {
        uint8_t version;
        if(!saved_struct_get_metadata(POWER_SETTINGS_PATH, NULL, &version, NULL)) break;

        if(version == POWER_SETTINGS_VER) { // if config actual version - load it directly
            success = saved_struct_load(
                POWER_SETTINGS_PATH,
                settings,
                sizeof(PowerSettings),
                POWER_SETTINGS_MAGIC,
                POWER_SETTINGS_VER);

        } else if(
            version ==
            POWER_SETTINGS_VER_0) { // if config previous version - load it and manual set new settings to inital value
            PowerSettingsV0* settings_v0 = malloc(sizeof(PowerSettingsV0));

            success = saved_struct_load(
                POWER_SETTINGS_PATH,
                settings_v0,
                sizeof(PowerSettingsV0),
                POWER_SETTINGS_MAGIC,
                POWER_SETTINGS_VER_0);

            if(success) {
                settings->auto_poweroff_delay_ms = 0;
            }

            free(settings_v0);
        }

    } while(false);

    if(!success) {
        FURI_LOG_W(TAG, "Failed to load file, using defaults");
        memset(settings, 0, sizeof(PowerSettings));
        power_settings_save(settings);
    }
}

void power_settings_save(const PowerSettings* settings) {
    furi_assert(settings);

    const bool success = saved_struct_save(
        POWER_SETTINGS_PATH,
        settings,
        sizeof(PowerSettings),
        POWER_SETTINGS_MAGIC,
        POWER_SETTINGS_VER);

    if(!success) {
        FURI_LOG_E(TAG, "Failed to save file");
    }
}
