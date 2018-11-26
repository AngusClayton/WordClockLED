//WORD CLOCK LED PROJECT
//BY ANGUS CLAYTON 2018
//THIS CODE IS:
//A sketch which contains
//Functions to turn on certin Words
//No code to change words dependent on time yet


void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT); ///8
  pinMode(12,OUTPUT); //7
  pinMode(11,OUTPUT); //6
  pinMode(10,OUTPUT); //5
  pinMode(9,OUTPUT); //4
  pinMode(8,OUTPUT); //3
  pinMode(7,OUTPUT); //2
  pinMode(6,OUTPUT); //1
  pinMode(5,OUTPUT); //1
  //0

  //Colums:
  pinMode(A0, OUTPUT); //C1
  pinMode(A1, OUTPUT); //C2
  pinMode(A2, OUTPUT); //C3
  

}


void loop() {
  it();
  reset();
  is();
  reset();
  five();
  reset();
  to();
  reset();
  seven();
  reset();

}
void it() {
  digitalWrite(5,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}
void is() {
  digitalWrite(6,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
void reset() {
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
  
}
//Middle
void ten() {
  digitalWrite(12,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
void seven() {
  digitalWrite(11,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
void four() {
  digitalWrite(10,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
void one() {
  digitalWrite(9,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
void minutes() {
  digitalWrite(8,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
void half() {
  digitalWrite(7,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
//RIGHT
void oclock() {
  digitalWrite(12,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
}
void eleven() {
  digitalWrite(11,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
}
void eight() {
  digitalWrite(10,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
}
void fiveR() {
  digitalWrite(9,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
}
void three() {
  digitalWrite(8,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
}

void twenty() {
  digitalWrite(6,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
}
void to() {
  digitalWrite(7,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
}
//LEFT COLLUM
void twelve() {
  digitalWrite(12,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}
void six() {
  digitalWrite(10,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}
void nine() {
  digitalWrite(11,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}

void two() {
  digitalWrite(9,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}
void past() {
  digitalWrite(8,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}
void five() {
  digitalWrite(7,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}
  

void quater() {
  digitalWrite(6,HIGH);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}


