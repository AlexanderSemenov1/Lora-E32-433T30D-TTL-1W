 //Ресивер на прием показаний
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
 softSerial.begin(9600);  // Скорость приема 9600, оптимально


 
  //digitalWrite(M0, HIGH);   //Здесь можно задать режим работы 
   digitalWrite(M0, LOW);     // Высокий уравень на М0 и М1 передача всегда включена
  //digitalWrite(M1, HIGH);   //  Низкий уравень на М0 и М1 передатчик отключен и включается только на время передачи (энергосбережение)
  digitalWrite(M1, LOW);      //  
  
}


void loop() {
 
 if(softSerial.available()){

     char i; 
     i = softSerial.read(); 
     Serial.print(i);
     delay (24);  //можно менять задержку для точной работы
     
 }
   }
