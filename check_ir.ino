//Define pins for the 5 IR sensors
const int irSensor1 = A0;
const int irSensor2 = A1;
const int irSensor3 = A2;
const int irSensor4 = A3;
const int irSensor5 = A4;

// Variables to store sensor readings
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;
int sensorValue5 = 0;

void setup() {
// Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read values from the IR sensors
  sensorValue1 = digitalRead(irSensor1);
  sensorValue2 = digitalRead(irSensor2);
  sensorValue3 = digitalRead(irSensor3);
  sensorValue4 = digitalRead(irSensor4);
  sensorValue5 = digitalRead(irSensor5);

  // Print sensor values to the Serial Monitor
  Serial.print("IR Sensor 1: ");
  Serial.print(sensorValue1);
  Serial.print("  IR Sensor 2: ");
  Serial.print(sensorValue2);
  Serial.print("  IR Sensor 3: ");
  Serial.print(sensorValue3);
  Serial.print("  IR Sensor 4: ");
  Serial.print(sensorValue4);
  Serial.print("  IR Sensor 5: ");
  Serial.println(sensorValue5);

  // Add a delay to make the output more readable
  delay(500);
}
