const int sensorPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(sensorPin);

  Serial.print("Sensor Value: ");
  Serial.println(motion);

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
  } 
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion");
  }

  delay(200);
}