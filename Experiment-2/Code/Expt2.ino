#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// ---------- LCD Setup ----------
LiquidCrystal_I2C lcd(0x27, 16, 2); // Change 0x27 if your module uses a different address

// ---------- DHT11 Setup ----------
#define DHTPIN 2      // Digital pin connected to DHT11
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// ---------- LDR Setup ----------
#define LDRPIN A0     // Analog pin connected to LDR

void setup() {
  lcd.begin();
  lcd.backlight();

  dht.begin();
  pinMode(LDRPIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  // -------- Read Sensor Values --------
  float temp = dht.readTemperature(); // Celsius
  float hum  = dht.readHumidity();
  int lightValue = analogRead(LDRPIN); // 0-1023

  // -------- Print to Serial Monitor --------
  Serial.print("Temp: "); Serial.print(temp); Serial.print(" C, ");
  Serial.print("Hum: "); Serial.print(hum); Serial.print("%, ");
  Serial.print("Light: "); Serial.println(lightValue);

  // -------- Display on LCD --------
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Te:"); lcd.print(temp,1); lcd.print("C ");

  lcd.setCursor(0, 1);
  lcd.print("Hu:"); lcd.print(hum,0); lcd.print("% ");
  lcd.print("Li:"); lcd.print(lightValue);

  delay(2000); // Update every 2 seconds
}
