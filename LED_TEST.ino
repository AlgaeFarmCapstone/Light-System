int led13 = 13;           // the pin the LED is connected to
int led12 = 12;
int led11 = 11;
int led10 = 10;
int brightness = 255;
int fade = 1;            // Fade speed of the light
int period = 10;          // Time the light turns on and off


void setup() {
  pinMode(led13, OUTPUT); // Declare the LED as an output
  pinMode(led12, INPUT);  // Declare LED as an input
  pinMode(led11, OUTPUT); // Declare the LED as an output
  pinMode(led10, INPUT);  // Declare LED as an input

  TurnOn();
  delay(period);        // Time on
  TurnOff();
  delay(period);        // Time Off
}

void TurnOn() {
for (int i = 0; i < 256; i++) {
       digitalWrite(led13, brightness);
       digitalWrite(led11, brightness);
       brightness = 1;
       delay(period);
   }
}

void TurnOff() {
   for (int i = 0; i < 256; i++) {
       digitalWrite(led13, brightness);
       digitalWrite(led11, brightness);
       brightness = 1;
       delay(period);
   }
}

void loop() {
  TurnOn();
  delay(period);        // Time on
  TurnOff();
  delay(period);        // Time Off
  }
