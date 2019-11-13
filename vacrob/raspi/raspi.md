#VacRob higher level control unit: Raspberry Pi

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

```bash
gsettings set org.gnome.desktop.screensaver lock-enabled false
```
