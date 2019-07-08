//lcd display show message

#include<LiquidCrystal.h>

const int rs = 3,rw = 4,en = 5,d4 = 8, d5 = 9,d6 = 10,d7 = 11;
int lcd_backlight = 13;

LiquidCrystal lcd(rs,rw,en,d4,d5,d6,d7);

void setup(){
	
	pinMode(lcd_backlight,OUTPUT);
	digitalWrite(lcd_backlight,HIGH);

	lcd.begin();
	lcd.clear();

	lcd.setCursor(0,0);
	lcd.print("Hello");

	lcd.setCursor(0,1);
	lcd.print("World");
}

void loop(){
	
}