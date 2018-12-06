#include <Servo.h>
Servo myservo;
Servo myservo1;
int xsen=A0;
int ysen=A1;
int sensval;
int sensval1;
int serv[]={9,10};

void setup() {
  // put your setup code here, to run once:
myservo.attach(serv[0]);
myservo1.attach(serv[1]);
pinMode(xsen, INPUT);
pinMode(ysen, INPUT);

}

void loop() {

 
  // put your main code here, to run repeatedly:
sensval=map(analogRead(xsen), 0, 1023, 0, 180);
sensval1=map(analogRead(ysen), 0, 1023, 0, 180);
if(sensval!=89){
  myservo.write(sensval);
}
if(sensval1!=89){
  myservo1.write(sensval1);
}

delay(20);
}
