
const int LDR_PIN = A0;
const int LASER_PIN = 7;
const int RED_LED = 5;
const int BUZZER_PIN = 6;

const int LIGHT_THRESHOLD = 15;

void setup() {
  pinMode(LASER_PIN, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  // Turn laser ON
  digitalWrite(LASER_PIN, HIGH);

  digitalWrite(RED_LED, LOW);
  noTone(BUZZER_PIN);

  Serial.begin(9600);
  delay(500);

  Serial.println("LASER SECURITY ALARM SYSTEM");
  Serial.println("System armed.");
}

void loop() {
  int lightValue = analogRead(LDR_PIN);

  Serial.print("LDR value: ");
  Serial.println(lightValue);

  // Your readings: 0–2 = beam received, 26–29 = interrupted.
  if (lightValue > LIGHT_THRESHOLD) {
    digitalWrite(RED_LED, HIGH);
    tone(BUZZER_PIN, 1000);

    Serial.println("BEAM INTERRUPTED! ALARM ACTIVATED!");
  } else {
    digitalWrite(RED_LED, LOW);
    noTone(BUZZER_PIN);

    Serial.println("BEAM RECEIVED");
  }

  delay(250);
}
