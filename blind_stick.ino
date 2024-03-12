// Define pin connections
const int trigPin = 9; // Trigger pin of the ultrasonic sensor
const int echoPin = 10; // Echo pin of the ultrasonic sensor
const int buzzerPin = 8; // Buzzer pin
const int motorPin = 7; // Vibration motor pin

// Variables for storing distance and duration
long duration;
int distance;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  
  // Define pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Clear trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Send a 10 microsecond pulse to trigger pin
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the duration of pulse on echo pin
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2;
  
  // Output distance for debugging
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Check if distance is less than 50 cm (adjust this threshold according to your need)
  if (distance < 50) {
    // Alert user with buzzer and vibration motor
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(motorPin, HIGH);
    delay(500); // Delay for half a second
    digitalWrite(buzzerPin, LOW);
    digitalWrite(motorPin, LOW);
  }
  
  // Delay before next reading
  delay(100);
}
