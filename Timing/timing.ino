void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(100);
  int time = millis();
  Serial.print("Time since startup = ");
  Serial.println(time);
  
}
