// Define constants pin numbers
const int SOUND_SENSOR_PIN = 2;   // Sound sensor pin connected to D2
const int LIGHT_SYSTEM_PIN = 4;   // House system pin connecetd to D4

// Defince for debounce
const unsigned long debounceDELAY = 1000;   // 1s debounce delay
unsigned long lastSoundTime = 0;            // Timestamp of last sound

void setup() {
  // Set the mode of the pins
  pinMode(SOUND_SENSOR_PIN, INPUT);
  pinMode(LIGHT_SYSTEM_PIN, OUTPUT);
}

void loop() {
  // Read the state of sound sensor
  int soundState = digitalRead(SOUND_SENSOR_PIN);
  
  // If a sound is detected and debounce delay is elapsed, toggle the lights
  if (soundState == HIGH && millis() - lastSoundTime > debounceDELAY) {
    digitalWrite(LIGHT_SYSTEM_PIN, !digitalRead(LIGHT_SYSTEM_PIN));
    lastSoundTime = millis();   // Update the last sound timestamp
  }
}
