int sensorPin = 2;
int ledPin = 8;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int sensorValue = digitalRead(sensorPin);

  if(sensorValue == LOW) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Obstacle Detected!");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Obstacle");
  }

  delay(200);
}