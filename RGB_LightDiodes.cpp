const int greenLEDPin = 4;
const int redLEDPin = 2;
const int blueLEDPin = 3;

const int redSensorPin = A0;
const int blueSensorPin = A1;
const int greenSensorPin = A2;

int redValue = 0;
int blueValue = 0;
int greenValue = 0;

int redSensorValue = 0;
int blueSensorValue = 0;
int greenSensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
}

void loop() {
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);
  delay(5);
  greenSensorValue = analogRead(redSensorPin);

  Serial.print("Raw sensor values \t Red: ");
  Serial.print(redSensorValue);
  Serial.print("Green: \t");
  Serial.print(greenSensorValue);
  Serial.print("Blue: \t");
  Serial.print(blueSensorValue);

  redValue = redSensorValue/4;
  blueValue = blueSensorValue/4;
  greenValue = greenSensorValue/4;

  analogWrite(redLEDPin, redValue);
  analogWrite(blueLEDPin, blueValue);
  analogWrite(greenLEDPin, greenValue);
}
