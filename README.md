 <div align="justify"> 

## __WHAT IT DOES__
This is an infra-red (IR) remote controlled car. <br>
 - It follows intructions according to the program for each button in the IR remote.
<br>

## __COMPONENTS USED__

1. Arduino UNO x1.
2. L298N Motor Driver Module x1.
3. Small Breadboard x1.
4. 6V Gear Motor x4.
5. 3.7V 3500mA 18650 Li-ion Rechargeable Battery x2.
6. Switch x1.
7. Jumper wires (as needed).
8. IR remote control with receiver x1.

## __EXTRA COMPONENTS NEEDED__

8. 4 Wheel Car Chassis Kit (this will include 4 Gear Motors) x1.
9. Battery chargers.
10. Battery holders, brackets, protective case, etc. (if needed).
11. Cardboards, color papers, etc. (for props and decorations).

<br><br>

_IMPORTANT NOTE: Do NOT make the robot heavy as this can put more load on the gear motors and cause the robot to NOT move. If the robot needs to be heavier, more powerful motors ranging between 5V to 46V must be used for the wheels. According to the required currect of the new motors, batteries also need to be replaced with batteries with higher current capacities. According to the required voltage for each new motor, batteries also should be replaced with batteries with higher voltage or more batteries of the same range should be connected in series with the already available batteries. As per the datasheet of L298N, the maximum voltage that can be handled by the L298N is 35V. But the recommended voltage is 5V to 12V, as above 12V the L298N can heat up. If the voltage exceeds 12V, the jumper of the L298N must be removed. Check out [this link](https://github.com/nazeehanimnaz/L298N-motor-driver-module/blob/main/README.md) to see how to calculate the exact amount of current and voltage required by a motor._

<br>

## __THE THEORY BEHIND__

1. _How is everything powered up?_ <br>
   - The rechargeable battery powers up the L298N motor driver module. As the total voltage of the batteries do not exceed 12v, the L298N's jumper is not removed. This makes the 5V pin of the L298N to act as an output. This output is used to give power to the Arduino. Then through the 5V pin of the Arduino, the IR receiver is powered up. <br>
  
2. _How does the robot detect the signals from the IR Remote?_
   - THe IR remote is considered as the transmitter. Like in any other IR remotes, this remote also contains an IR LED, which emits IR rays. The receiver recieves the IR signal from the remote when a button is pressed. The arduino follows the intructions given for each buttons and helps the robot to work as instructed.
  
<br>

## __TIPS__

1. Use high quality batteries for efficiency.
2. Remove the wire connected to the VIN pin of Arduino before connecting the Arduino to the PC/laptop to upload the code. Once the code is uploaded, disconnect the Arduino from the PC/laptop and connect the wire back to the VIN pin of the Arduino. This is to prevent too much voltage flowing into the Arduino via the laptop and the batteries.
3. The most common issue while making robotics projects is that the wires break too soon. Either better wires instead of jumper wires should be used, or use a multimeter to constantly check if the jumper wires are in good condition.
4. Check the Raw Data Value / Hex Code of each button in the serial monitor. This is to identify the code for each button and to use those codes to give instructions for each button. Checking this once is sufficient.

<br>

## __PROBLEMS FACED AND SOLUTIONS__

1. _Why does the receiver not detect the signals given by the IR remote?_ <br>
   There are 3 main reasons for this; <br>
      - The receiver could be too far from the IR remote.<br>
      - The battery in the IR Remote could be too low. Try changing the battery. <br>
      - Check if any wires connected to the receiver is damaged or removed. Trying replacing the wires or connect the removed wires back again. <br>

2. _Why do wheels rotate when off the floor, but not when on the floor?_ <br>
   If wheels are rotating when off the floor, this means that there is no problem with the supplied voltage or current. There could be 3 reasons for this:
      - It could be due to the heavy load the gear motors have when on the floor. For this reason, make the robot as light as you can. <br>
      - The wheels might not be rotating in the correct directions. If the 2 wheels on the left or right side are rotating opposite to each other when it is supposed to move forward, then the robot will not move. When both wheels are moving opposite to each other, the direction becomes neutral and the robot stops moving. Always ensure, the wheels are rotating in the correct directions off the floor, before keeping the robot on the floor. <br>
      - Check if the wheels are not aligned or stable and feels shakey when kept on the floor. If it is so, make sure to purchase a good quality chassis and check if all the screws used to fix the gear motors to the chassis are properly tightened. <br>

3. _Why are the wheels not moving at all, even off the floor?_ <br>
   - This could be due to several reasons from wrong connections, broken wires to short circuited boards. But if all is well and if the issue still persists, the issue could be due to the rechargeable batteries not being able to give enough power to the wheels. Recharge the batteries atleast till they reach a total voltage of 7.4V and try again. <br>

4. _Why are the wheels only moving at full speed instead of varying or reduced speeds?_ <br>
   - The ENA and ENB pins of the L298N should be connected to PWM pins of the Arduino. Only this allows speed to vary as given in the code. <br>

5. _Why is the Serial Monitor printing some unidentifiable characters when I want to check the raw data value for each button?_ <br>
   - After opening the Serial monitor, change the baud rate in the serial monitor to the baud rate used in the code, i.e. 115200. <br>






</div>
   

   
