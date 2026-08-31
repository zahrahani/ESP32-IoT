#define REDLED_PIN 26 

void setup() {
  pinMode(REDLED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(REDLED_PIN, HIGH);
  delay(100);

  digitalWrite(REDLED_PIN, LOW);
  delay(100);
}