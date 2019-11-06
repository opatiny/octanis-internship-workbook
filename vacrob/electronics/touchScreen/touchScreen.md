# Touch screen on Raspberry pi running Ubuntu

## Specifications

The touch screen we use is a 7'' Raspberry Pi Touch Display.

- 800 x 480 display
- 10 fingers detection


## Wiring

Three cables are connecting the screen to the computer module:
- ribbon cable for data bus (DSI)
- 5V
- GND

## Allowing the screen to be detected

Once the screen was connected to the computer module, it was not detected by the Raspberry pi as a suitable input/output and the screen remained black.

Running the following command allowed the default screen to be the touch screen:

```bash
sudo wget https://goo.gl/gaqNrO -O /boot/dt-blob.bin
```

## VNC (equivalent of `screen` with graphics)

### Client side

**VNC:** Virtual Network Computing. Allows to remotely control another computer.

VNC client / viewer: [https://www.linuxhelp.com/how-to-install-vinagre-in-ubuntu](https://www.linuxhelp.com/how-to-install-vinagre-in-ubuntu)

### Server side

The server has to be set up on the reapberry pi.

Procedure: [https://www.digitalocean.com/community/tutorials/how-to-install-and-configure-vnc-on-ubuntu-16-04](https://www.digitalocean.com/community/tutorials/how-to-install-and-configure-vnc-on-ubuntu-16-04)

The password is: raspivnc

There is no view-only password.
