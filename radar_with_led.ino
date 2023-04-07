#define trig 7
#define echo 6
#define ledpin 8
int time;
float dist;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  // put your  main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
time=pulseIn(echo,HIGH);
dist=0.34*time/2;

if(dist<100){
  digitalWrite(ledpin,HIGH);}
else{
  digitalWrite(ledpin,LOW);}
delay(500);
}
