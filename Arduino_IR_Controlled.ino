#include<IRremote.h>

#define R 10
#define G 6
#define B 3

int dictionary = {
  {1, 2},
  {7, 3}
 };

void setup() {
  Serial.begin(9600);

  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);

 double long a =  51234;

}

void loop() {
  

}
