//This sketch prints how many seconds have elapsed since startup

//This variable is set at 0 at startup
int elapsedSecs = 0;

//A connection to the board is established
void setup() {
  Serial.begin(9600); 
  pinMode(13, OUTPUT); //pin 13 is set for output
}


//The loop operates as follows:
// 1) Waits 1 second
// 2) Adds int 1 to elapsedSecs
// 3) Prints <elapsedSecs> sec have elapsed
void loop() {
  delay(1000);
  elapsedSecs = elapsedSecs + 1;

//  blink LED
  digitalWrite(13, HIGH); //turns on pin 13 LED 
  delay(10); //waits 10 milliseconds
  digitalWrite(13, LOW); //turns off pin 13 LED
  
  
  Serial.print(elapsedSecs);
  Serial.println(" sec have elapsed"); 
}
