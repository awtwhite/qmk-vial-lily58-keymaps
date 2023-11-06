# Lily58 layout by awtwhite

## Setting Up Your QMK Environment
See: https://docs.qmk.fm/#/newbs_getting_started

## Notes
RP2040 controllers (like Helios or NiceNano!) compile to a .uf2 file, which you drag-drop onto the controller 
that appears as drive on computer once the controller is reset into boot mode. 

## QMK Firmware
See: https://docs.qmk.fm/#/

```bash
# Compile .uf2 file for 'Helios RP2040 USB Type C' controller
qmk compile -kb lily58/awtwhite -km default -e CONVERT_TO=helios
```

## Vial (QMK) Firmware
See: https://get.vial.today/docs/porting-to-vial.html

```bash
# Compile .uf2 file for 'Helios RP2040 USB Type C' controller
qmk compile -kb lily58/awtwhite -km vial -e CONVERT_TO=helios
```
