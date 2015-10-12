
// include the servo library
#include <Servo.h>

Servo myServo;  // create a servo object
int s1 =1;   // variable to hold the angle for the servo motor
int s2 =1;
int s3 =0;
void setup() {
  myServo.attach(9); // attaches the servo on pin 9 to the servo object
  Serial.begin(9600); // open a serial connection to your computer
}

void loop() {
  s1 = analogRead(A0);
  delay(5);
  s2 = analogRead(A1);
  delay(5);
  // scale the numbers from the pot
  //angle = map(potVal, 0, 1023, 0, 179);

  // print out the angle for the servo motor
  //Serial.print(", angle: ");
  s3 = s1 + s2 ;
  Serial.println(s3);
  Serial.print(s1);
  Serial.println(s2);
 
  if ( s1 < s2) {
  // set the servo position
  myServo.write (179);
 // delay(500);
  //myServo.write (0);
  // wait for the servo to get there
  delay(500);
  }
  if ( s3 >= 45){
  myServo.write (90);
 // delay(500);
  //myServo.write (0);
  // wait for the servo to get there
  delay(500);
  }
else {
  myServo.write (0);
 // delay(500);
  //myServo.write (0);
  // wait for the servo to get there
  delay(500); 
}
 //   myServo.write (90);
//delay(1500); 
  }


