# Installing Xenial in parallel with a Windows (dual boot)

[Home](../../../README.md) | [Programming theory](./theory.md)

## Required

You need a USB stick with a capacity of at least 2Gb and nothing important on it (tried with an SSD, but didn't work).

## Procedure

Based on: [https://www.youtube.com/watch?v=u5QyjHIYwTQ](https://www.youtube.com/watch?v=u5QyjHIYwTQ)

- download the Ubuntu (Xenial) image you want
- download the [Etcher](https://www.balena.io/etcher/) software, which allows you to flash the USB key with the image
- while the downloads are finished, quick format the USB key
  - in Files, right click on the USB device and click "quick format", confirm -> you are warned that all data on the key will be erased (chose a usb stick with nothing important on it)
- go to the Disk Management tab, right click on the main memory space and chose "Shrink Disk" -> choose the size of the memory space you want to dedicate to Ubuntu, validate -> a new "unallocated" box appears
- install Etcher
- open Etcher and choose the right image
- the USB stick is selected automatically (check anyways)
- click "Flash"
- wait a few minutes for Flash to finish
- reboot computer
- when on the boot screen, press F12 -> you'll access the boot menu
- select "Boot from USB" or something similar
- Ubuntu is launched
- start the installation of Ubuntu on the computer
- fertig
