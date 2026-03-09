int pin13=13;
int dt=500;
void setup(){
  pinMode(pin13,OUTPUT);
}
void loop(){
  digitalWrite(pin13,LOW);
  delay(dt);
  digitalWrite(pin13,HIGH);
  delay(dt);
}
