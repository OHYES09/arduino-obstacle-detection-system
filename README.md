# Arduino Obstacle Detection System

## Overview
This project is a real-time obstacle detection system built using Arduino Uno and an IR proximity sensor module. The system detects nearby objects and provides LED indication and serial monitor feedback.

---

## Components Used
- Arduino Uno
- IR Proximity Sensor (HW-201)
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

---

## Features
- Real-time obstacle detection
- LED indication
- Serial monitor output
- Adjustable sensor sensitivity

---

## Working Principle
The IR sensor emits infrared light and detects reflections from nearby objects. When an object is detected, the Arduino activates an LED and prints a message to the serial monitor.

---

## Circuit Setup
Connect:
- Sensor OUT → Arduino D2
- LED → Arduino D8
- VCC → 5V
- GND → GND

---

## Arduino Code

```cpp
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
```

---

## Future Improvements
- Add buzzer alert
- Add ultrasonic sensor
- Convert into obstacle avoiding robot
- Add OLED display

---

## Author
OHYES09
