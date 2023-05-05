// C++ code
//
int led = 12;
 void setup() {
  pinMode(led, OUTPUT);    // define o pino 7 como saída
 }
   void loop()
   {
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
   }