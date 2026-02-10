#include <IRremote.hpp>

// Define all the pins of the motor driver module L298N

#define enaPin 3
#define in1 5
#define in2 6
#define in3 9
#define in4 10
#define enbPin 11
#define IR_RECEIVE_PIN 12

void setup() {

  // Define if pins are input or output
  pinMode(enaPin, OUTPUT);
  pinMode(enbPin, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(115200);
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK); // Start the receiver
}

void loop() {

   if (IrReceiver.decode()) {
      Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); // Print "old" raw data
      IrReceiver.printIRResultShort(&Serial); // Print complete received data in one line
      IrReceiver.printIRSendUsage(&Serial);   // Print the statement required to send this data
      delay(200);

      if (IrReceiver.decodedIRData.decodedRawData == 0xE718FF00)//Press 2
        { 
          Forward();
        }
        else if (IrReceiver.decodedIRData.decodedRawData == 0xAD52FF00)//Press 8
        { 
          Backward();
        }
         else if (IrReceiver.decodedIRData.decodedRawData == 0xF708FF00)//Press 4
        { 
          Left();
        }
        else if (IrReceiver.decodedIRData.decodedRawData == 0xA55AFF00)//Press 6
        { 
          Right();
        }
        else if (IrReceiver.decodedIRData.decodedRawData == 0xE31CFF00)//Press 5
        { 
          Stop();
        }
        else if (IrReceiver.decodedIRData.decodedRawData == 0xF30CFF00)//Press 1
        { 
          SlightLeft();
        }
        else if (IrReceiver.decodedIRData.decodedRawData == 0xA15EFF00)//Press 3
        { 
          SlightRight();
        }
        else if (IrReceiver.decodedIRData.decodedRawData == 0xBD42FF00)//Press 7
        { 
          SlightLeftBack();
        }
        else if (IrReceiver.decodedIRData.decodedRawData == 0xB54AFF00)//Press 9
        { 
          SlightRightBack();
        }
        
      IrReceiver.resume(); // Enable receiving of the next value
  }
}

// FUNCTIONS TO CHANGE THE DIRECTION OF THE WHEELS
void Backward() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

 void Forward() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}

 void Stop() {
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

void Right() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}

void Left() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

void SlightRight() {
  Right();
  delay(500);
  Forward();
}

void SlightLeft() {
  Left();
  delay(500);
  Forward();
}

void RightBack() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

void LeftBack() {
  digitalWrite(enaPin,HIGH);
  digitalWrite(enbPin,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

void SlightRightBack() {
  RightBack();
  delay(500);
  Backward();
}

void SlightLeftBack() {
  LeftBack();
  delay(500);
  Backward();
}






