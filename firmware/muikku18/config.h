// Copyright 2025 Squalius-cephalus (@Squalius-cephalus)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODER_A_PINS { GP9, GP11 }
#define ENCODER_B_PINS { GP10, GP12 }
#define ENCODER_DIRECTION_FLIP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
