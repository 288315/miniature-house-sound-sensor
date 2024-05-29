# Miniature House Sound Sensor

## Description
This project features a sound sensor for a miniature house that detects sounds like a clap or a snap to switch lights on and off.

## Features
- Detects sounds (clap, snap) to control lights.
- Switches lights on and off based on sound detection.

### Components
- Microcontroller (e.g., Arduino)
- Sound sensor module
- Jumper wires
- Breadboard
- House System Connection

## Setup
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/miniature-house-sound-sensor.git
   ```
2. Open the project in your preferred IDE (e.g., Arduino IDE).

### Usage
1. Connect the sound sensor to the microcontroller as per the circuit diagram.
2. Upload the provided code to the microcontroller.
3. Test the setup by making a clap or snap sound near the sensor to switch the lights.
4. If necessary, adjust the sensitivity of the sound sensor module to optimize detection based on your environment. 
5. Integrate the sound sensor into the house system.

### Circuit Diagram


### Code Example
```cpp
// Example code snippet
void setup() {
  pinMode(SOUND_SENSOR_PIN, INPUT);
  pinMode(, OUTPUT);
}

void loop() {
  int soundState = digitalRead(SOUND_SENSOR_PIN);
  if (soundState == HIGH) {
    // Toggle whole house system on or off
    // Add your code to control the whole house system here
    delay(500); // Debounce delay
  }
}
```

```cpp
// Define constants for pin numbers
const int SOUND_SENSOR_PIN = 2;  // Sound sensor pin connected to Arduino digital pin 2
const int HOUSE_SYSTEM_PIN = 3;  // House system pin connected to Arduino digital pin 3

void setup() {
  // Set the mode of the pins
  pinMode(SOUND_SENSOR_PIN, INPUT);
  pinMode(HOUSE_SYSTEM_PIN, OUTPUT);
}

void loop() {

}  
```

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
