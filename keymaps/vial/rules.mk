# MCU name
MCU = RP2040
BOOTLOADER = rp2040

# Both of these rules are required (for Vial and backwards compatible with QMK)
VIA_ENABLE = yes
VIAL_ENABLE = yes

# Compiler optimization (for smaller firmware build)
LTO_ENABLE = yes # Link Time Optimization

# OLED
OLED_ENABLE = yes

# Others
# https://docs.qmk.fm/#/config_options?id=feature-options
QMK_SETTINGS = yes
EXTRAKEY_ENABLE = yes       # Audio control and System control
WPM_ENABLE = yes            # Words per minute
TAP_DANCE_ENABLE = yes      # Tap Dance key
MOUSEKEY_ENABLE = yes       # Mouse keys
COMBO_ENABLE = yes          # Combo keys
GRAVE_ESC_ENABLE = yes
MAGIC_ENABLE = yes

BOOTMAGIC_ENABLE = no
COMMAND_ENABLE = no         # Commands for debug and configuration
CONSOLE_ENABLE = no         # Console for debug
KEY_OVERRIDE_ENABLE = no
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
