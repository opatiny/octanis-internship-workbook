## The PCBs of the robot

### Computer board (big format)
The computer board is the main board of the project. A Raspberry PI slides onto it and acts as the main micro-controller. The Lidar, the screen and the battery will be directly connected to it.

### Motor board (big format)

To modify!

GitLab project: [https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master](https://make.octanis.ch/oi/oibus-dc-motor-controller/tree/master)

The motor board has to be enhanced to become functional. The goal is to solve all the issues of the project. The board allows to control __4 DC motors__. It uses __H-bridges__ to chose the rotation direction.

H-bridge component: [__VNH7040AYTR__, Motion Motor Control](https://www.arrow.com/en/products/vnh7040aytr/stmicroelectronics?utm_campaign=octopart_2018&utm_currency=USD&utm_keyword=VNH7040AYTR&utm_medium=aggregator&utm_content=inv_listing&utm_source=octopart)

One of the problems to solve is that the board does not manage __encoders__ of the DC motors.

### Distance and bump sensing board (small format)

To design!

Each board should include two distance sensors, one vertical (to prevent fall) and one horizontal, and one bump sensor.

Distance sensor: 

### Coral board (small format)

To design!

Coral is an IA that detects objects and recognizes them. A board integrating it will be needed.
