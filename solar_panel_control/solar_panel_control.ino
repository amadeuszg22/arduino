
// include the servo library
#include <Servo.h>
Servo myServo;  // create a servo object
int pom[180];
int s;
int maxValue;
int pos;
int i =0;

void setup() {
  myServo.attach(9); // attaches the servo on pin 9 to the servo object
  Serial.begin(9600); // open a serial connection to your computer
}

void loop() {

for(i=0;i<=179;i++)
   {
  // Serial.println(i);
     myServo.write(i);
     s = analogRead(A0);
     //Serial.print("sensor:");
     //Serial.println(s); 
     pom[i] = s;
  //    Serial.print("sensortablica: "); 
 //    Serial.print(i);
       //Serial.print(" Wartosc: ");
 //     Serial.println(pom[i]);
      delay(10);
     
   }
    
    maxValue = pom[180];  // initialize the maximum as the first element
 for(byte idx = 0; idx <=180;idx++)
   {
 if (pom[idx] > maxValue)
 {
 maxValue = pom[idx];
 pos = idx;
  }
}

  Serial.println(maxValue);
  Serial.println(pos);
  myServo.write (pos);
  delay(1000);
}
