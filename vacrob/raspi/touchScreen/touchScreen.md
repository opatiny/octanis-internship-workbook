# Touch screen on Raspberry pi running Ubuntu

[Home](../../../README.md) | [Project main page](../../vacrob.md) | [Computer module/raspi doc](../raspi.md) | [Lidar doc](../lidar/lidar.md) |

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

## Seeing the screen graphics remotely

The problem with the touch screen is that is requires an external keyboard, which will not be possible keep once the robot moves. Therefore, we have installed a VNC server on the raspi, so that we could see the screen content remotely and act on it. The doc about the installation of the server is [here](../raspi.md).
