#VacRob higher level control unit: Raspberry Pi

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [Lidar doc](./lidar/lidar.md) | [Touch screen doc](./touchscreen/touchscreen.md)

The VacRob contains a computer module, which implements a Raspberry Pi. We want to have Ubuntu Xenial (16.04) with ROS running on it, to be able to develop a substantial robotics application.

## Installing ROS and Xenial

We used a image provided by Ubiquity Robotics to flash the Rapsberry Pi. This image already contains Ubuntu and ROS. It can be downloaded here:

[https://downloads.ubiquityrobotics.com/pi.html](https://downloads.ubiquityrobotics.com/pi.html)

## Rapsberry Pi peripherals

They are two peripherals that are directly connected and controlled by the Raspberry Pi. Documentation was written about each of them:

- [Lidar](./lidar/lidar.md)
- [Touch screen](./touchScreen/touchScreen.md)

## Connecting to the WiFi

Initially, an Ethernet cable was used to connect the rapsi to the internet. However, this will be very unhandy once the robot starts moving. Therefore, we want it to connect to the WiFi.

**Warning:** The computer module doesn't have an integrated WiFi, so you have to use a WiFi USB dongle!!

**Getting the Wifi to work:** [https://forum.ubiquityrobotics.com/t/how-do-i-disable-wifi-access-point/33/2](https://forum.ubiquityrobotics.com/t/how-do-i-disable-wifi-access-point/33/2)

```bash
sudo pifi set-hostname vacrob
```

Reboot after this step.

You can now connect to the robot using:

```bash
ssh ubuntu@vacrob.local
```

Then add the WiFi of the LAN:

```bash
sudo pifi add MYNETWORK PASSWORD
```

Reboot after this step.

## IP addresses of the raspi

The IP address of the raspberry is required for every SSH or VNC connection.

**Ethernet:** 192.168.1.24
**WiFi:** 192.168.1.26

## Enable auto login on the ubuntu

[https://ubuntu-mate.community/t/auto-login-to-the-desktop/60](https://ubuntu-mate.community/t/auto-login-to-the-desktop/60)

```bash
sudo vi /usr/share/lightdm/lightdm.conf.d/60-lightdm-gtk-greeter.conf
```

Add the end of this file, add (where `ubuntu` is your username):

```
autologin-user=ubuntu
```

Then reboot, it should work.

## Disable lock screen

In the Ubuntu GUI, go to Preferences -> Screensaver -> Disable Screensaver.

## VNC (equivalent of `SSH` with graphics)

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
