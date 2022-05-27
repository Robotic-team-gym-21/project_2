
#include <SoftwareSerial.h>
#include<Servo.h>
//control moters
int IN3=8;
int IN4=9;

int IN1=6;
int IN2=7;


SoftwareSerial mySerial(0,1);
int command;

void setup() {
  // put your setup code here, to run once:

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);


  Serial.begin(9600);
  mySerial.begin(9600);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

}

void loop() {
    // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    command=(Serial.read());
     if (command=='F')
    {digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     }
    else if (command=='B')
    {
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
    }

    else if (command=='L')
    {
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
 
    }
    else if(command=='R')
    {
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);

      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);

    }
    
    else if  (command=='S')
    
    {
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);

      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
    }


  }
 
}
 
