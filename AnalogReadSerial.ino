const byte buzzzer= 18;

#define Meter  15


void setup() {
  Serial.begin(9600);

  pinMode(Meter, INPUT);
  pinMode(buzzer_gpio, OUTPUT);
}


void loop() {
  int analogValue = analogRead(Meter);
  int Volume = map(analogValue, 0, 4095, 0, 255);
  if (volume > 60) {
    Serial.println("decrease the volume ");
    digitalWrite(buzzzer, HIGH);
    delay(100);
  }
  digitalWrite(buzzzer, LOW);
  Serial.println(Volume);
  delay(30);
}
