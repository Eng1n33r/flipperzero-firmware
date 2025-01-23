## Main changes
- Current API: 79.3
* SubGHz: Jolly Motors support (with add manually) (Thanks @pkooiman !)
* Power: Auto Power Off Timer (by @Dmitry422 with some fixes by @xMasterX)
* OFW: **Fix lost BadBLE keystrokes**
* OFW: **Add the ability to send a signal once via RPC**
* OFW PR 4070: Infrared: increase max carrier limit (by @skotopes)
* OFW PR 4025: Increase system stack's reserved memory size (Fix USB UART Bridge Crash) (by @Astrrra)
* OFW: merged gsurkov/vcp_break_support branch for usb uart bridge (WIP!!!)
* Apps: **Check out more Apps updates and fixes by following** [this link](https://github.com/xMasterX/all-the-plugins/commits/dev)
## Other changes
* Power & Desktop: Add input events sub check & use event system for auto power off
* OFW: Rename FuriHalDebuging.md to FuriHalDebugging.md
* OFW: nfc: Fix MIFARE Plus detection
* OFW: u2f: Fix leaking message digest contexts
* OFW: nfc: Fix MFUL PWD_AUTH command creation
* OFW: Bump cross-spawn in /applications/system/js_app/packages/create-fz-app
* OFW: **Pipe** (new api funcs)
* OFW: Fix invalid path errors while deploying SDK by enforcing toolchain to use UTF-8 on initial SDK Extraction
* OFW: **Added flipper_format_write_empty_line(...)**
* OFW: Fix skylander ID reading
* OFW: Work around incorrect serial port handling by the OS
* OFW: Add winter animations 
* OFW: FBT: Don't lint JS packages
* OFW: **Loader: Fix BusFault in handling of OOM** (was already included in previous UL release)
* OFW: **NFC Fix ISO15693 stucking in wrong mode.**
* OFW: Update `infrared_test.c` reference
* OFW: **FuriThread stdin**
* OFW: NFC: Plantain parser Last payment amount fix 
* OFW: NFC clipper: BART station ids for San Lorenzo, Bay Fair
* OFW: Fix typo for mf_classic_key_cahce_get_next_key() function
<br><br>
#### Known NFC post-refactor regressions list: 
- Mifare Mini clones reading is broken (original mini working fine) (OFW)
- NFC CLI was removed with refactoring (OFW) (will be back soon)

----

[-> How to install firmware](https://github.com/DarkFlippers/unleashed-firmware/blob/dev/documentation/HowToInstall.md)

[-> Download qFlipper (official link)](https://flipperzero.one/update)

## Please support development of the project
|Service|Remark|QR Code|Link/Wallet|
|-|-|-|-|
|**Patreon**||<div align="center"><a href="https://github.com/user-attachments/assets/a88a90a5-28c3-40b4-864a-0c0b79494a42"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|https://patreon.com/mmxdev|
|**Boosty**|patreon alternative|<div align="center"><a href="https://github.com/user-attachments/assets/893c0760-f738-42c1-acaa-916019a7bdf8"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|https://boosty.to/mmxdev|
|cloudtips|only RU payments accepted|<div align="center"><a href="https://github.com/user-attachments/assets/5de31d6a-ef24-4d30-bd8e-c06af815332a"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|https://pay.cloudtips.ru/p/7b3e9d65|
|YooMoney|only RU payments accepted|<div align="center"><a href="https://github.com/user-attachments/assets/33454f79-074b-4349-b453-f94fdadc3c68"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|https://yoomoney.ru/fundraise/XA49mgQLPA0.221209|
|USDT|(TRC20)|<div align="center"><a href="https://github.com/user-attachments/assets/0500498d-18ed-412d-a1a4-8a66d0b6f057"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`TSXcitMSnWXUFqiUfEXrTVpVewXy2cYhrs`|
|ETH|(BSC/ERC20-Tokens)|<div align="center"><a href="https://github.com/user-attachments/assets/0f323e98-c524-4f41-abb2-f4f1cec83ab6"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`0xFebF1bBc8229418FF2408C07AF6Afa49152fEc6a`|
|BTC||<div align="center"><a href="https://github.com/user-attachments/assets/5a904d45-947e-4b92-9f0f-7fbaaa7b37f8"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`bc1q0np836jk9jwr4dd7p6qv66d04vamtqkxrecck9`|
|SOL|(Solana/Tokens)|<div align="center"><a href="https://github.com/user-attachments/assets/ab33c5e0-dd59-497b-9c91-ceb89c36b34d"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`DSgwouAEgu8iP5yr7EHHDqMNYWZxAqXWsTEeqCAXGLj8`|
|DOGE||<div align="center"><a href="https://github.com/user-attachments/assets/2937edd0-5c85-4465-a444-14d4edb481c0"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`D6R6gYgBn5LwTNmPyvAQR6bZ9EtGgFCpvv`|
|LTC||<div align="center"><a href="https://github.com/user-attachments/assets/441985fe-f028-4400-83c1-c215760c1e74"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`ltc1q3ex4ejkl0xpx3znwrmth4lyuadr5qgv8tmq8z9`|
|BCH||<div align="center"><a href="https://github.com/user-attachments/assets/7f365976-19a3-4777-b17e-4bfba5f69eff"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`qquxfyzntuqufy2dx0hrfr4sndp0tucvky4sw8qyu3`|
|XMR|(Monero)|<div align="center"><a href="https://github.com/user-attachments/assets/96186c06-61e7-4b4d-b716-6eaf1779bfd8"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`41xUz92suUu1u5Mu4qkrcs52gtfpu9rnZRdBpCJ244KRHf6xXSvVFevdf2cnjS7RAeYr5hn9MsEfxKoFDRSctFjG5fv1Mhn`|
|TON||<div align="center"><a href="https://github.com/user-attachments/assets/92a57e57-7462-42b7-a342-6f22c6e600c1"><img src="https://github.com/user-attachments/assets/da3a864d-d1c7-42cc-8a86-6fcaf26663ec" alt="QR image"/></a></div>|`UQCOqcnYkvzOZUV_9bPE_8oTbOrOF03MnF-VcJyjisTZmsxa`|

#### Thanks to our sponsors who supported project in the past and special thanks to sponsors who supports us on regular basis:
@mishamyte, ClaraCrazy, Pathfinder [Count Zero cDc], callmezimbra, Quen0n, MERRON, grvpvl (lvpvrg), art_col, ThurstonWaffles, Moneron, UterGrooll, LUCFER, Northpirate, zloepuzo, T.Rat, Alexey B., ionelife, ...
and all other great people who supported our project and me (xMasterX), thanks to you all!


## **Recommended update option - Web Updater**

### What `r`, `e`, ` `, `c` means? What I need to download if I don't want to use Web updater?
What build I should download and what this name means - `flipper-z-f7-update-(version)(r / e / c).tgz` ? <br>
`flipper-z` = for Flipper Zero device<br>
`f7` = Hardware version - same for all flipper zero devices<br>
`update` = Update package, contains updater, all assets (plugins, IR libs, etc.), and firmware itself<br>
`(version)` = Firmware version<br>
| Designation | [Base Apps](https://github.com/xMasterX/all-the-plugins#default-pack) | [Extra Apps](https://github.com/xMasterX/all-the-plugins#extra-pack) | ⚠️RGB mode* |
|-----|:---:|:---:|:---:|
| ` ` | ✅ |  |  |
| `c` |  |  |  |
| `e` | ✅ | ✅ |  |
| `r` | ✅ | ✅ | ⚠️ |

⚠️This is [hardware mod](https://github.com/quen0n/flipperzero-firmware-rgb#readme), works only on modded flippers! do not install on non modded device!

Firmware Self-update package (update from microSD) - `flipper-z-f7-update-(version).tgz` for mobile app / qFlipper / web<br>
Archive of `scripts` folder (contains scripts for FW/plugins development) - `flipper-z-any-scripts-(version).tgz`<br>
SDK files for plugins development and uFBT - `flipper-z-f7-sdk-(version).zip`



