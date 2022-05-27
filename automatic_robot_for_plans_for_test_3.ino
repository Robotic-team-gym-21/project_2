




#include<Servo.h>

int ledblue=24;
int ledyallow=26;

int servoPin1=12;
Servo s1;

int servoPin2=13;
Servo s2;

int servo_position3=0;
int servoPin3=30;
Servo s3;

int servo_position4=0;
int servoPin4=32;
Servo s4;


int S0a=2;
int S1a=3;
int S2a=4;
int S3a=5;
int Outa=6;
int reda;
int bluea;
int greena;



int S0b=52;
int S1b=53;
int S2b=50;
int S3b=48;
int Outb=46;
int redb=0;
int blueb=0;
int greenb=0;


void setup() {
  // put your setup code here, to run once:
s1.attach(servoPin1);
s2.attach(servoPin2);
s3.attach(servoPin3);
s4.attach(servoPin4);
digitalWrite(S0a, HIGH);
digitalWrite(S1a, LOW);
s3.write(0);

s4.write(0);

digitalWrite(S0b, HIGH);
digitalWrite(S1b, LOW);

pinMode(ledblue, OUTPUT);
pinMode(ledyallow, OUTPUT);
  pinMode(S0a, OUTPUT);
  pinMode(S1a, OUTPUT);
  pinMode(S2a, OUTPUT);
  pinMode(S3a, OUTPUT);
  pinMode(Outa, INPUT);
  pinMode(S0b, OUTPUT);
  pinMode(S1b, OUTPUT);
  pinMode(S2b, OUTPUT);
  pinMode(S3b, OUTPUT);
  pinMode(Outb, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(ledyallow, HIGH);
 digitalWrite(ledblue, HIGH);

  digitalWrite(S2a, LOW);
  digitalWrite(S3a, LOW);
  reda = pulseIn(Outa, LOW);
  Serial.print("REDa=");
  Serial.print(reda);
  Serial.print("   ");
  
  digitalWrite(S2a, HIGH);
  digitalWrite(S3a, HIGH);
  greena = pulseIn(Outa, LOW);
  Serial.print("GREENa=");
  Serial.print(greena);
  Serial.print("   ");
  
  digitalWrite(S2a, LOW);
  digitalWrite(S3a, HIGH);
  bluea = pulseIn(Outa, LOW);
  Serial.print("BLUEa=");
  Serial.print(bluea);
  Serial.println("   ");
  delay(300);
  


  digitalWrite(S2b, LOW);
  digitalWrite(S3b, LOW);
  redb = pulseIn(Outb, LOW);
  Serial.print("REDb=");
  Serial.print(redb);
  Serial.print("   ");
  
  digitalWrite(S2b, HIGH);
  digitalWrite(S3b, HIGH);
  greenb = pulseIn(Outb, LOW);
  Serial.print("GREENb=");
  Serial.print(greenb);
  Serial.print("   ");
  
  digitalWrite(S2b, LOW);
  digitalWrite(S3b, HIGH);
  blueb = pulseIn(Outb, LOW);
  Serial.print("BLUEb=");
  Serial.print(blueb);
  Serial.println("   ");
  delay(300);


  //---------------------------braxionas a-----------------------------
  
  if (reda>8 && reda<18 && greena>9 && greena<19 && bluea>8 && bluea<16)
  {}//color=WHITE
  
  else if (reda>80 && reda<125 && greena>90 && greena<125 && bluea>80 && bluea<125)
  {}//color=BLACK
  
  else if (reda>12 && reda<30 && greena>40 && greena<70 && bluea>33 && bluea<70) 
  {}//color=RED
  
  else if (reda>180 && reda<205 && greena>115 && greena<145 && bluea>130 && bluea<165) 
  {digitalWrite(ledblue, HIGH);
digitalWrite(ledyallow, LOW);
//delay(200);
  for(servo_position3=120;servo_position3>=0;servo_position3 -=1)
   s3.write(servo_position3);
   delay(1000);
  for(servo_position3=0;servo_position3<=120;servo_position3 +=1)
    s3.write(servo_position3);
    delay(1000);
//color=GREEN
  }  
  else if (reda>45 && reda<105 && greena>65 && greena<150 && bluea>90 && bluea<160) //color=YELLOW
  {digitalWrite(ledyallow, HIGH);
digitalWrite(ledblue, LOW);
//delay(200);
  for(servo_position4=120;servo_position4>=0;servo_position4 -=1)
   s4.write(servo_position4);
   delay(100);
  for(servo_position4=0;servo_position4<=120;servo_position4 +=1)
   s4.write(servo_position4);
   delay(100);}
    
  else if (reda>65 && reda<125 && greena>65 && greena<115 && bluea>32 && bluea<65) //color=BLUE
  {}
  else if (reda>115 && reda<180 && greena>85 && greena<140 && bluea>130 && bluea<175) //color=kafe+prasino
  {digitalWrite(ledyallow, LOW);
digitalWrite(ledblue, LOW);
delay(300);}
  else {}//color=NO COLOR


//-------------------------braxionas b---------------------------------------

  if (redb>8 && redb<18 && greenb>9 && greenb<19 && blueb>8 && blueb<16)
  {}//color=WHITE
  
  else if (redb>80 && redb<125 && greenb>90 && greenb<125 && blueb>80 && blueb<125)
  {}//color=BLACK
  
  else if (redb>12 && redb<30 && greenb>40 && greenb<70 && blueb>33 && blueb<70) 
  {}//color=RED
  
  else if (redb>16 && redb<35 && greenb>25 && greenb<50 && blueb>45 && blueb<80) 
  {digitalWrite(ledblue, HIGH);
  digitalWrite(ledyallow, LOW);
//delay(200);
 for(servo_position4=120;servo_position4>=0;servo_position4 -=1)
   s4.write(servo_position4);
  delay(100);
   for(servo_position4=0;servo_position4<=120;servo_position4 +=1)
    s4.write(servo_position4);
    delay(100);}
//color=YELLOW

  else if (redb>50 && redb<80 && greenb>35 && greenb<65 && blueb>55 && blueb<85) //color=GREEN
  {digitalWrite(ledyallow, HIGH);
digitalWrite(ledblue, LOW);
//delay(200);
 for(servo_position3=120;servo_position3>=0;servo_position3 -=1)
    s3.write(servo_position3);
    delay(100);
   for(servo_position3=0;servo_position3<=120;servo_position3 +=1)
    s3.write(servo_position3);
    delay(100);
  }
   else if (redb>115 && redb<180 && greenb>85 && greenb<140 && blueb>130 && blueb<175) //color=kafe+prasino
  {digitalWrite(ledyallow, LOW);
digitalWrite(ledblue, LOW);
delay(300);}

  else if (redb>65 && redb<125 && greenb>65 && greenb<115 && blueb>32 && blueb<65) //color=BLUE
  {}
  else {}//color=NO COLOR
  
 }
