# STM32-USB-PD-Demo

Black Pill Demo for USB-PD using an FUSB302

Note: This repository uses submodules!

This repository implements a simple demo app for the `usb-pd` library.
This will automatically select the maximum available output voltage from the charger as a demo.

Assumed wiring:

| STM32 pin | FUSB signal |
| --------- | ----------- |
| B6        | SCL         |
| B7        | SDA         |
| B5        | IRQ         |
| GND       | GND         |

Additionally the UART will output diagnostics messages on pin A9 at 1000000 baud 8N1.

For testing I'm using the [reclaimer labs breakout boards](https://www.tindie.com/products/reclaimerlabs/usb-c-power-delivery-phy-breakout-board/).
On these make sure to connect the pullup resistor power rails to vdd as well.
