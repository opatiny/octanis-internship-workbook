# DC motor board FW: specific for the application

In general, we are trying to write FW for the different UAVCAN modules that is independent from the application. However, in the case of the VacRob, we will write some application specific firmware. Indeed, all the decisions based on the distance boards measurements are made in there.

**Goal:** Use the data on the UAVCAN bus to make the robot move in the middle of a corridor. It should also avoid every obstacle and stop in case of fall hazard.

