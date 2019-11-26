// small script to test a motor

oi_driver_set_motor(1, 2, 10, 100, 0);
osDelay(1000);
oi_driver_set_motor(1, 0, 0, 100, 0);
osDelay(1000); // delay execution for 10 milliseconds
oi_driver_set_motor(1, 1, 10, 100, 0);
osDelay(1000); // delay execution for 10 milliseconds
oi_driver_set_motor(1, 0, 0, 100, 0);
osDelay(1000); // delay execution for 10 milliseconds
