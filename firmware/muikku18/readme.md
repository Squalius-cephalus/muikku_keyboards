# Muikku18

![Muikku18](https://i.imgur.com/Y6wc0zS.png)

Muikku18 is a RP2040 Zero based 18-key macro pad that uses Redragon low profile switches.

* Keyboard Maintainer: [Squalius-cephalus](https://github.com/Squalius-cephalus)
* Hardware Supported: Muikku58 PCB
* Hardware Availability: https://github.com/Squalius-cephalus/muikku_keyboards

Make example for this keyboard (after setting up your vial build environment):

    make muikku_keyboard/muikku58:vial

## Bootloader

Enter the bootloader in 2 ways:

* **Physical boot button**: Hold BOOT button down and connect MCU to the PC
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
