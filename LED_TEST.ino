int led13 = 13; //Hookedup    // the pin the LED is connected to
int led12 = 12;
int led11 = 11; //Hookedup
int led10 = 10;

void setup() {
  pinMode(led13, OUTPUT); // Declare the LED as an output
  pinMode(led12, INPUT);  // Declare LED as an input
  pinMode(led11, OUTPUT); // Declare the LED as an output
  pinMode(led10, INPUT);  // Declare LED as an input
}

void loop() {
  digitalWrite(led13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                 // wait for a second
  digitalWrite(led13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led11, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                 // wait for a second
 }
