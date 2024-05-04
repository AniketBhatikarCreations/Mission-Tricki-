// Define pins
const int trigPin = 7;
const int echoPin = 6;

// Define variables
long duration;
int distance;

void setup() {

  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Set the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);  // Read the duration from echoPin

  distance = duration * 0.0343 / 2;  //Since the ultrasonic wave travels at the speed of sound (approximately 343 meters per second or 0.034 centimeters per microsecond), this formula calculates the distance to the object based on the duration of the echo. The division by 2 is needed because the echo travels to the object and back, so to get the one-way distance, we divide by 2.

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);
}