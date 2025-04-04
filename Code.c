/*
 Blink with variable 
 Turns an LED on for one second, then off for one second repeatedly.
 But the interval increases each time by 1 more seconds 

 created on Feb 2025
 by Annwyn
 */

int blinkTime = 1000; // set variable to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an output 
  pinMode (LED_BUILTIN, OUTPUT); 
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(blinkTime); // wait for length of variable blinkTime
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the votage LOW 
  delay(1000); // wait for a second

  blinkTime = blinkTime + 1000; // add 1 second (or 1000) to variable blinkTime
} 
