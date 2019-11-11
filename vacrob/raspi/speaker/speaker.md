# Piezo speaker and WTV020M01 module to play audio files

We want to integrate a speaker to make the VacRob scream and swear when it bumps into walls.

To achieve thi, we are using a WTV020M01 module  and a super cheap piezo speaker.

### Specifications

- you have to solder a jumper to select 3.3V power supply
- uses a micro SD card (recommended <= 2B)
- the audio format is a proprietary format: to overcome this, convert the files into 16 bits ...
- the file to be played is set through an SPI interface

<img src="./neato-pinout.png" alt="WTV020M01pinout" class="center">

Pinout of the audio module.

### Wiring for testing

- **Pin 4:**speaker VCC
- **Pin 5:**speaker GND
- **Pin 8:**GND
- **Pin 15:** BUSY -> we put an LED on it and a pull-up resistor -> the LED will be on when no file is played
- **Pin 16:** 3.3V (not more!)

### Links

- datasheet: [https://www.elechouse.com/elechouse/images/product/MP3%20Sound%20Mini%20SD%20Card%20Module/MP3%20Mini%20SD%20Card%20Module.pdf](https://www.elechouse.com/elechouse/images/product/MP3%20Sound%20Mini%20SD%20Card%20Module/MP3%20Mini%20SD%20Card%20Module.pdf)
- test without micro-controller: [https://nerdclub-uk.blogspot.com/2016/06/playing-audio-with-wtv020m01-and-arduino.html](https://nerdclub-uk.blogspot.com/2016/06/playing-audio-with-wtv020m01-and-arduino.html)
- convert mp3 to compatible format: [https://www.iot-experiments.com/wtv020m01-mp3-to-compatible-wav/](https://www.iot-experiments.com/wtv020m01-mp3-to-compatible-wav/)
- arduino tutorial: [https://www.electronoobs.com/eng_arduino_tut8.php](https://www.electronoobs.com/eng_arduino_tut8.php)