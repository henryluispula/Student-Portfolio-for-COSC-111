int tempPin = A0;   // LM35
int ldrPin  = A2;   // Photoresistor
int ledBuzPin = 12; // LED + Buzzer on same pin

void setup() {
  pinMode(ledBuzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read LM35 temperature
  int tempADC = analogRead(tempPin);
  float voltage = tempADC * (5.0 / 1023.0);   // Convert ADC to voltage
  float tempC = (voltage - 0.5) * 100.0;      // Convert to Celsius


  // Read photoresistor
  int brightness = analogRead(ldrPin);

  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.print(" C, Brightness: ");
  Serial.println(brightness);

  // Fire detection
  if (tempC >= 50 && brightness >= 220) {
    // Fire detected -> fast blink
    digitalWrite(ledBuzPin, HIGH);
    delay(100);
    digitalWrite(ledBuzPin, LOW);
    delay(100);
  } else {
    // Safe -> off
    digitalWrite(ledBuzPin, LOW);
  }
}
