int pwmControl = 16;
int rpmControl = 15;

void setup() {
  Serial.begin(115200);
  pinMode(pwmControl, OUTPUT);
  pinMode(rpmControl, OUTPUT);
  analogWrite(pwmControl, 50);
  analogWrite(rpmControl, 50);
}

void loop() {
  
}