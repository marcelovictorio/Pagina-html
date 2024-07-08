/*
  Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("ALERTA: LED LIGADO"); // print alert message to the serial monitor
  delay(1000);                       // wait for a second

  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("ALERTA: LED DESLIGADO"); // print alert message to the serial monitor
  delay(1000);                       // wait for a second
}
  
