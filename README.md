# IR REMOTE CONTROL CAR


### - Components and tools used:
  * Arduino UNO with USB cable x 1
  * L298N motor driver module x 1
  * 5V DC gear motor with wheel x 4
  * IR remote and receiver x 1
  * 9V batteries x 2
  * Mini breadboard x 1
  * Car Chassis
  * Jumper Wires
  * Power bank to power up the Arduino.


### - Fix the 4 gear motors to the chassis (an instruction manual would usually be provided by the supplier of the chassis).
### - Motor 1 is the front left motor.
### - Motor 2 is the rear left motor.
### - Motor 3 is the front right motor.
### - Motor 4 is the rear right motor.


### - Connections:
  * 5V of Arduino to the positive side of the breadboard.
  * GND of Arduino to the negative side of the breadboard.
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
  * Positive side of two 9V batteries connected in series to +12V of L298N motor driver.
  * Negative side of the above 9V batteries to GND of L298N motor driver.

### - Refer to the [Circuit-Diagram.png] () file for the circuit diagram.
### - Refer to the [complete-code] () file for the code.
 
### - Tips:
  * Remove the jumper of the L298N motor driver module as the voltage supplied to the driver is more than 12V.
  * If a wheel is rotating in the opposite direction compared to the other wheels, interchange only that wheel's positive and negative connections.
  * If wheels do not rotate even after all the above connections are done correctly, check if the motor driver has its LEDs switched on. If yes, then use a multimeter to check the voltage of the batteries. Change the batteries if the voltage is down.
 

### - Questions that may arise:
  * Why does the L298N motor driver module need an external voltage of more than 12V?
    * The driver needs to power up four 5V DC motors. This is not going to an easy task if a lesser voltage is used. Try removing one 9V battery and observe how the wheels don't rotate now.
  * Then why is a 5V supplied by the Arduino to the L298N motor driver module?
    * This is supplied to power up the driver and to make sure that the Arduino and the driver has a common ground. Observe how the L298N driver does not switch on if this connection is removed.
  * Why are 9V batteries used here instead of 18650 Li-ion rechargeable batteries?
    * I recommend using high quality 18650 Li-ion rechargeable batteries compared to using 9V batteries as Li-ion batteries are rechargeabale and very efficient for high powered devices. But the reasons why I used 9V batteries here are that, normal Li-ion batteries available in my country are not of good quality and can be used only a few times and the good quality ones are quite expensive.
