#define device 7
const String onMode='1';
const String offMode='0';
String state='N';

void setup() {
  pinMode(device,OUTPUT);
  digitalWrite(devive,LOW);
  Serial.begin(38400);
}

void loop() {
  Serial.flush();

  get_order();

  implement_order();
  
}
