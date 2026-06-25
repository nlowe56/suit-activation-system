#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int leds[] = {6, 9, A0, A1};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(8, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  
  lcd.begin(16, 2);
  lcd.print("SUIT SYSTEM");
  lcd.setCursor(0, 1);
  lcd.print("STANDBY...");
}

void loop() {
  int button = digitalRead(7);
  
  if (button == LOW) {
    // Power up sequence
    lcd.clear();
    lcd.print("INITIALIZING...");
    
    for (int i = 0; i < 4; i++) {
      digitalWrite(leds[i], HIGH);
      tone(8, 262 + (i * 90), 150);
      delay(200);
    }
    
    // Suit activated
    lcd.clear();
    lcd.print("SUIT ONLINE");
    lcd.setCursor(0, 1);
    lcd.print("POWER: 100%");
    noTone(8);
    tone(8, 523, 400);
    delay(2500);
    noTone(8);
    
    // Power down
    lcd.clear();
    lcd.print("POWERING DOWN");
    for (int i = 3; i >= 0; i--) {
      digitalWrite(leds[i], LOW);
      delay(150);
    }
    
    lcd.clear();
    lcd.print("SUIT SYSTEM");
    lcd.setCursor(0, 1);
    lcd.print("STANDBY...");
    delay(1000);
  }
}