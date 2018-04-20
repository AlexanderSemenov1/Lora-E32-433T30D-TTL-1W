/* 8: M0
 * 9: M1
 * 10: RX
 * 11: TX
 * 12: AUX
 */
#include <SoftwareSerial.h>
#define M0 12
#define M1 11
#define SOFT_TX 10
#define SOFT_RX 9
#define AUX 8


SoftwareSerial softSerial(SOFT_RX, SOFT_TX); // RX, TX

void setup() {
  
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(SOFT_RX, INPUT);
  pinMode(SOFT_TX, OUTPUT);
  pinMode(AUX, INPUT);
  
 Serial.begin(9600);
 softSerial.begin(1200);


 
  //digitalWrite(M0, HIGH);    
   digitalWrite(M0, LOW);
  //digitalWrite(M1, HIGH);
  digitalWrite(M1, LOW);
}

void loop() {

  softSerial.println ("hello world");
  Serial.println ("hello world");
  delay(2000);
  //softSerial.println (0);
  //delay(500);

}
