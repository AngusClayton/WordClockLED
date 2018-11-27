//WORD CLOCK LED PROJECT
//BY ANGUS CLAYTON 2018
//THIS CODE IS:
//A sketch which contains
//Functions to turn on certin Words
//No code to change words dependent on time yet
//Was written in plain text, but is saved as a .ino format.


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

  dHour(7);
  reset();
  dMinute(17);
  reset();



    
    
    
}
  
  // Two and Past need barrier
  // BOTH tens need new led, wire check.
  //Minutes,Twenty and too need barrier
  


void dMinute(int y) {
  
  if (y < 6){
    five();
    reset();
    minutes();
    past();
    reset();
  }
  
  if ((y < 13) and (y > 6)){
    ten();
    reset();
    minutes();
    past();
    reset();
  }
  
  if ((y > 12) and (y < 18)){
    quater();
    reset();
    past();
    reset();
  }
  
  if ((y > 18) and (y < 25)){
    twenty();
    reset();
    minutes();
    reset();
    past();
    reset();
  }
  
  if ((y > 25) and (y<35)){
    half();
    reset();
    past();
    reset();
  }
//30 minute mark
  
if ((y > 34) and (y < 42)){
    twenty();
    reset();
    minutes();
    reset();
    to();
    reset();
  }
if ((y > 42) and (y < 49)){
    quater();
    reset();
    to();
    reset();
  }
if ((y > 49) and (y < 54)){
    ten();
    reset();
    minutes();
    reset();
    to();
    reset();
  }
if ((y > 54) and (y < 60)){
    five();
    reset();
    minutes();
    reset();
    to();
    reset();
  }



}

void dHour(int x) {
  it();
  reset();
  is();
  reset();
  
  if (x == 1) {
    one();
  }

  if (x == 2) {
    two();
  }
  

  if (x == 3) {
    three();
  }
  if (x == 4) {
    four();
  }
  if (x == 5) {
    fiveR();
  }
  
    
  if (x == 6) {
    six();
  }
    
  if (x == 7) {
    seven();
  }
    
  if (x == 8) {
    eight();
  }
    
  if (x == 9) {
    nine();
  }
    
  if (x == 10) {
    ten();
  }
    
  if (x == 11) {
    eleven();
  }
    
  if (x == 12) {
    twelve();
  }
  
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
  analogWrite(12,10);
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
