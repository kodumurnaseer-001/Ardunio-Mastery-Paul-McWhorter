
int rpn=A0;
int gpn=A2;
int bpn=A1;
void setup() {
  pinMode(rpn,OUTPUT);
  pinMode(gpn,OUTPUT);
  pinMode(bpn,OUTPUT);
  Serial.begin(9600);

  // put your setup code here, to run once:
}

void loop() {

  //WHITE COLOR

 analogWrite(rpn,255);
 analogWrite(gpn,255);
 analogWrite(bpn,255);
 delay(1000);
 //RED COLOR
 analogWrite(rpn,255);
 analogWrite(gpn,0);
 analogWrite(bpn,0);
 delay(1000);
 //GREEN COLOR
 analogWrite(rpn,0);
 analogWrite(gpn,255);
 analogWrite(bpn,0);
 delay(1000);
 //BLUE COLOR
 analogWrite(rpn,0);
 analogWrite(gpn,0);
 analogWrite(bpn,255);
 delay(1000);
 //YELLOW COLOR
 analogWrite(rpn,255);
 analogWrite(gpn,255);
 analogWrite(bpn,0);
 delay(1000);
 //PINK COLOR
 analogWrite(rpn,255);
 analogWrite(gpn,0);
 analogWrite(bpn,255);
 delay(1000);
 //SKYBLUE COLOR 
analogWrite(rpn,0);
 analogWrite(gpn,255);
 analogWrite(bpn,255);
 delay(1000);

  // put your main code here, to run repeatedly:
}
