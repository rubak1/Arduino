#define AIR_SENSOR A0   // MQ sensor connected to A0

int airValue;

void setup() {
  Serial.begin(9600);
}

void loop() {

  airValue = analogRead(AIR_SENSOR);

  // Send only numeric value (best for LabVIEW)
  Serial.println(airValue);

  // Optional status message
  if (airValue < 200) {
    Serial.println("GOOD");
  } 
  else if (airValue < 400) {
    Serial.println("MODERATE");
  } 
  else {
    Serial.println("POOR");
  }

  delay(1000);
}
