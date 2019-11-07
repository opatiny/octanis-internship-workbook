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

**VNC:** Virtual Network Computing. Allows to remotely control another computer.

### Server side

The server has to be set up on the raspberry pi.

Procedure: [https://www.digitalocean.com/community/tutorials/how-to-install-and-configure-vnc-on-ubuntu-16-04](https://www.digitalocean.com/community/tutorials/how-to-install-and-configure-vnc-on-ubuntu-16-04)

Warning: This server only allowed to create new sessions and didn't let the client to see what was currently happening on the screen. So another server had to be actually used: `x11vnc`.

**Procedure:** [https://tecadmin.net/setup-x11vnc-server-on-ubuntu-linuxmint/](https://tecadmin.net/setup-x11vnc-server-on-ubuntu-linuxmint/)

**Install package:**
```bash
sudo apt-get update
sudo apt-get install x11vnc
x11vnc -storepasswd # create a password for clients that want to connect to the server
```
The password is: raspivnc

**Start the server:**
```bash
sudo x11vnc -auth guess -forever -loop -noxdamage -repeat -rfbauth /home/ubuntu/.vnc/passwd -rfbport 5900 -shared
```

**Start server at boot:**

```bash
sudo vi /etc/systemd/system/x11vnc.service
```
In the new file that you created, paste (change path!):

```bash
[Unit]
Description=x11vnc remote desktop server
After=multi-user.target

[Service]
Type=simple
ExecStart=/usr/bin/x11vnc -auth guess -forever -loop -noxdamage -repeat -rfbauth /home/RAHUL/.vnc/passwd -rfbport 5900 -shared

Restart=on-failure

[Install]
WantedBy=multi-user.target
```

Afterwards:

```bash
sudo systemctl start x11vnc
sudo systemctl status x11vnc
```

If this work, finally enable deamon:

```bash
sudo systemctl enable x11vnc.service
```

### Client side

VNC client / viewer: [https://www.linuxhelp.com/how-to-install-vinagre-in-ubuntu](https://www.linuxhelp.com/how-to-install-vinagre-in-ubuntu)

- run the soft (Windows -> vnc)
- type in the IP address of the device (192.168.1.24 through ethernet) followed by :0 -> the session that you want to join  
  ```
  192.168.1.24:0
  ```
- click "Connect"
- type in the password set on the server side
- Ctrl-Alt-Del to send mouse and keyboard actions

