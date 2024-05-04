#include <Servo.h>

const int trigPin = 7;
const int echoPin = 6;

long duration;
int distance;

Servo hip;
Servo knee;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  hip.attach(8);
  knee.attach(9);
  hip.write(120);   // Initial position for hip servo
  knee.write(140);  // Initial position for knee servo
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);  // Read the duration from echoPin

  // Calculate the distance in centimeters using the speed of sound
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);

  // If distance is less than 10cm, perform servo movements
  if (distance > 69) {
    for (int i = 115; i <= 145; i++) {  //forward
      hip.write(i);
      knee.write(i);
      delay(20);
    }
    delay(250);
    for (int i = 145; i >= 115; i--) {  //backward
      hip.write(i);
      knee.write(i);
      delay(20);
    }
  } else {
    hip.write(120);  // Initial position for hip servo
    knee.write(140);
    // If distance is greater than or equal to 10cm, print "Goodbye"
    Serial.println("Goodbye");
  }
}
