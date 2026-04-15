int lval;
int lpn=A0;
int rpn=8;
int bpn=7;
int d=250;
void setup() {
  // put your setup code here, to run once:
  pinMode(lpn,INPUT);
  pinMode(rpn,OUTPUT);
  pinMode(bpn,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lval=analogRead(lpn);
  Serial.println(lval);
  delay(d);
  if(lval>=150){
    digitalWrite(bpn,HIGH);
    digitalWrite(rpn,LOW);
    
  }else{
    digitalWrite(rpn,HIGH);
    digitalWrite(bpn,LOW);
    
}
}
