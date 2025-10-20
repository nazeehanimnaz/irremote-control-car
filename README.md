# IR REMOTE CONTROL CAR


### - Components and tools used:
  * Arduino UNO with USB cable x 1
  * L298N motor driver module x 1
  * 5V DC gear motor with wheel x 4
  * IR remote and receiver x 1
  * 3.7V 3500mA 18650 batteries x 2
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
  * Positive side of two 18650 batteries connected in series to +12V of L298N motor driver.
  * Negative side of the above 18650 batteries to GND of L298N motor driver.

### - Refer to the [Circuit-Diagram.png](https://github.com/nazeehanimnaz/irremote-control-car/blob/main/Circuit-Diagram.png) file for the circuit diagram.
### - Refer to the [complete-code](https://github.com/nazeehanimnaz/irremote-control-car/blob/main/complete-code) file for the code.
 
### - Tips:
  * Remove the jumper of the L298N motor driver module to disable the 5V regulator of the driver. This prevents damage to the driver as the voltage supplied to it, is more than 12V.
  * If a wheel is rotating in the opposite direction compared to the other wheels, interchange only that wheel's positive and negative connections.
  * If wheels do not rotate even after all the above connections are done correctly, check if the motor driver has its LEDs switched on. If yes, then use a multimeter to check the voltage of the batteries. Change the batteries if the voltage is down.
 

### - FAQs:
  * Then why is a 5V supplied by the Arduino to the L298N motor driver module?
    * When the jumper is removed, the 5V regulator of the driver is disabled. Now, the 5V pin of the driver acts as an input pin and expects a 5V supply to power the its logic circuitry. Observe how the L298N driver does not switch on if this connection is removed.
  * Why use 18650 Li-ion rechargeable batteries?
    * Rechargeble are always ech freindly and cost effective. Tehe 4 gear motors here only consume 6v each, and the connections are parallel according to the L298N. Hence a voltage of 6 would be enough for all 4 gear motors. But since the L298N consumes some extra voltage before giving it to the motors, we will need a voltage of bit more than 6v. We're using two 3.7v batteries which would give a total of 7.4v, which would be sufficient for the motors. Most important thing is to check the current supplied by the batteries. My batteries give 3500mA each and each gear motor uses a maximum of 250mA. Total current needed is 1000mA. Hence the batteries are good to give enough current to all the 4 motors.
  * How can I give the Arduino a portable power supply instead of a powerbank?
    * Use a seperate battery (not the one connected to the motor driver). Any type of battery can be used as long as it is within the recommended range. Either the barrel jack or the VIN can be used for this purpose. With 5V and 2A.
