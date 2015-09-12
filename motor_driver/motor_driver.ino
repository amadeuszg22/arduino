const int M2D1PWM = 6;
const int M2D2PWM = 5;
const int M2IN1 = 9;
const int M2IN2 = 11;
const int ENABLE = 10;
int i;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
  pinMode(M2D1PWM, OUTPUT);
  pinMode(M2D2PWM, OUTPUT);
  pinMode(M2IN1, OUTPUT);
  pinMode(M2IN2, OUTPUT);
  pinMode(ENABLE, OUTPUT);
}
void loop() {
  for (i =0;i<=200;i++)
   {
  // put your main code here, to run repeatedly:
  digitalWrite(ENABLE, HIGH);
  digitalWrite(M2IN2, LOW);
  digitalWrite(M2IN1, HIGH);
  digitalWrite(M2D2PWM, HIGH);
  analogWrite(M2D1PWM, 20);
  Serial.println(i);
  delay(100);
}  
}
