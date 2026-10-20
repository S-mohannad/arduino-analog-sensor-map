int v=0;
void setup() {
Serial.begin(9600);
}
void loop() {
v=analogRead(A0);
v=map(v,0,1023,0,150);
Serial.println(v);
delay(1000);
}