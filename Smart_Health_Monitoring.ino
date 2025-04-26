#include <Wire.h>
#include <DHT.h>

// ✅ DHT11 Sensor setup
#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ✅ Fake MAX30100 and KY-038 values
int fakeBPM = 75;
int fakeSpO2 = 98;
int fakeSoundValue = 1200;

// ✅ Buzzer setup
#define BUZZER_PIN 4

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(BUZZER_PIN, OUTPUT);
  
  // Test beep to check buzzer
  tone(BUZZER_PIN, 1000);
  delay(200);
  noTone(BUZZER_PIN);

  Serial.println("🛠 Setup complete. Monitoring started...\n");
}

void loop() {
  // ✅ Reading DHT11 Sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("⚠ Failed to read from DHT sensor!");
  } else {
    Serial.print("🌡 Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");
    Serial.print("🌡 Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
  }

  // ✅ Fake MAX30100 Readings
  fakeBPM = random(60, 100);
  fakeSpO2 = random(95, 100);

  Serial.print("❤ Heart Rate: ");
  Serial.print(fakeBPM);
  Serial.print(" bpm\t");
  Serial.print("🩸 SpO2: ");
  Serial.print(fakeSpO2);
  Serial.println(" %");

  // ✅ Fake Sound Sensor Reading
  fakeSoundValue = random(800, 1200);

  bool alert = false;

  if (fakeSoundValue > 1000) {
    Serial.println("🔊 Loud Sound Detected!");
    alert = true;
  }

  if (fakeBPM < 60 || fakeBPM > 100) {
    Serial.println("⚠️ Abnormal Heart Rate!");
    alert = true;
  }

  if (fakeSpO2 < 94) {
    Serial.println("⚠️ Low Oxygen Level!");
    alert = true;
  }

  // ✅ Buzzer Logic
  if (alert) {
    tone(BUZZER_PIN, 1000);
    delay(500);
    noTone(BUZZER_PIN);
    delay(500);
  } else {
    noTone(BUZZER_PIN);
  }

  Serial.println("--------------------------------------------------");
  delay(1000);
}
