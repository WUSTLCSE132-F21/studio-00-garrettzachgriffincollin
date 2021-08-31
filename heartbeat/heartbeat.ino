//This sketch prints how many seconds have elapsed since startup
//Authored by Zach Cohn


//This variable is set at 0 at startup
int elapsedSecs = 0;

//A connection to the board is established
void setup() {
  Serial.begin(9600); 
}


//The loop operates as follows:
// 1) Waits 1 second
// 2) Adds int 1 to elapsedSecs
// 3) Prints <elapsedSecs> sec have elapsed
void loop() {
  delay(1000);
  elapsedSecs = elapsedSecs + 1;
  Serial.print(elapsedSecs);
  Serial.println(" sec have elapsed"); 
}
