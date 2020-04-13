#include<Servo.h>
Servo myservo; // create servo object to control a servo
int angle =0;
void setup() {
myservo.attach(9);
// put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
for(angle=0;angle<180;angle+=1)
{
  myservo.write(angle);
  delay(20);
}
for(angle=180;angle>180;angle-=1)
{
  myservo.write(angle);
  delay(20);
}
}
