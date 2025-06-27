Hi Guys! 

- Components and tools used:
  * Arduino UNO with USB cable x 1
  * L298N motor driver module x 1
  * 5V DC gear motor with wheel x 4
  * IR remote and receiver x 1
  * 9V batteries x 2
  * Mini breadboard x 1
  * Car Chassis
  * Jumper Wires


- Fix the 4 gear motors to the chassis (an instruction manual would usually be provided by the supplier of the chassis).
- Motor 1 is the front left motor.
- Motor 2 is the rear left motor.
- Motor 3 is the front right motor.
- Motor 4 is the rear right motor.


- Connections:
  * OUT1 of L298N motor driver to the positive sides of Motor 1 and Motor 2.
  * OUT2 of L298N motor driver to the negative sides of Motor 1 and Motor 2.
  * OUT3 of L298N motor driver to the positive sides of Motor 3 and Motor 4.
  * OUT4 of L298N motor driver to the negative sides of Motor 3 and Motor 4. 
  * ENA of L298N motor driver to digital pin 3 of Arduino.
  * IN1 of L298N motor driver to digital pin 5 of Arduino.
  * IN2 of L298N motor driver to digital pin 6 of Arduino.
  * IN3 of L298N motor driver to digital pin 9 of Arduino.
  * IN4 of L298N motor driver to digital pin 10 of Arduino.
  * ENB of L298N motor driver to digital pin 11 of Arduino.
  * +5V of L298N motor driver to the positive side of the breadboard.
  * GND of L298N motor driver to the negative side of the breadboard.
  * VCC of IR receiver to the positive side of the breadboard.
  * GND of IR receiver to the negative side of the breadboard.
  * DO of IR receiver to digital pin 12 of Arduino.
  * VIN of Arduino to the positive side of the breadboard.
  * GND of Arduino to the negative side of the breadboard.
  * Positive side of two 9V batteries connected in series to +12V of L298N motor driver.
  * Negative side of the above 9V batteries to GND of L298N motor driver.


- Refer to the "complete-code" file for the code.
 
- Tips:
  * If a wheel is rotating in the opposite direction compared to the other wheels, interchange only that wheel's positive and negative connections.
