int nSleepPin = 8;
int AIN1Pin = 3;
int AIN2Pin = 5;
int BIN1Pin = 6;
int BIN2Pin = 11;

void setup() {
  pinMode(nSleepPin, OUTPUT);
  pinMode(AIN1Pin, OUTPUT);
  pinMode(AIN2Pin, OUTPUT);
  pinMode(BIN1Pin, OUTPUT);
  pinMode(BIN2Pin, OUTPUT);

  digitalWrite(nSleepPin, HIGH); // Activeer de DRV8833

  // Motor A (bijvoorbeeld links)
  digitalWrite(AIN1Pin, LOW);  // Draairichting A
  digitalWrite(AIN2Pin, LOW);  // Draairichting A

  // Motor B (bijvoorbeeld rechts)
  digitalWrite(BIN1Pin, LOW);  // Draairichting B
  digitalWrite(BIN2Pin, LOW);  // Draairichting B
}

void loop() {
  // Motor A vooruit met traploze snelheid
 analogWrite(BIN1Pin, 0);
 analogWrite(BIN2Pin, 0);
 analogWrite(AIN2Pin, 0);
 for (int i = 0; i <= 255; i++) {
    analogWrite(AIN1Pin, i);
    delay(10);  // Voeg wat vertraging toe voor een geleidelijke toename van snelheid
  }
  // Motor B achteruit met traploze snelheid
 analogWrite(BIN1Pin, 0);
 analogWrite(AIN1Pin, 0);
 analogWrite(AIN2Pin, 0);
 for (int k = 0; k <= 255; k++) {
    analogWrite(BIN2Pin, k);
    delay(10);  // Voeg wat vertraging toe voor een geleidelijke toename van snelheid
  }
delay(1000);
  // Motor A achteruit met traploze snelheid
 analogWrite(BIN1Pin, 0);
 analogWrite(BIN2Pin, 0);
 analogWrite(AIN1Pin, 0);
 for (int j = 0; j <= 255; j++) {
    analogWrite(AIN2Pin, j);
    delay(10);  // Voeg wat vertraging toe voor een geleidelijke toename van snelheid
  }
delay(1000);
  // Motor B vooruit met traploze snelheid
 analogWrite(BIN1Pin, 0);
 analogWrite(AIN1Pin, 0);
 analogWrite(AIN2Pin, 0);
 for (int i = 0; i <= 255; i++) {
    analogWrite(BIN1Pin, i);
    delay(10);  // Voeg wat vertraging toe voor een geleidelijke toename van snelheid
  }
delay(1000);  // Wacht 2 seconden

  // Stop beide motoren
  analogWrite(AIN1Pin, 0);
  analogWrite(AIN2Pin, 0);
  analogWrite(BIN1Pin, 0);
  analogWrite(BIN2Pin, 0);

  delay(2000);  // Wacht 2 seconden
}
