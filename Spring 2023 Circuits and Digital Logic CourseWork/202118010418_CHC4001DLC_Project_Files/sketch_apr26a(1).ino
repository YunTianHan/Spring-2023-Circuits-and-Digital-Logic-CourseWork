int ledMark = 2;
int num = 5;

void setup() {
  for (int i = ledMark; i < ledMark + num; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = ledMark; i < ledMark + num; i++) {
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
  
  for (int i = ledMark; i < ledMark + num; i++) {
    digitalWrite(i, HIGH);
    delay(1000);
  }
  
  for (int i = ledMark + num - 1; i >= ledMark; i--) {
    digitalWrite(i, LOW);
    delay(100);
  }
  
  for (int i = ledMark + num - 1; i >= ledMark; i--) {
    digitalWrite(i, HIGH);
    delay(1000);
  }
  
  for (int i = ledMark; i < ledMark + num; i++) {
    digitalWrite(i, LOW);
    delay(1000);
  }
  for(int i=ledMark;i<ledMark+num;i++){
  digitalWrite(i,HIGH);
  digitalWrite(i+1,HIGH);
  delay(1000);
  digitalWrite(i,LOW);
  digitalWrite(i+1,LOW);
  
} 
}