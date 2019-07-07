//simple led on/off (blinking)
int pin = 13;
void setup(){
	pinMode(pin,OUTPUT);
}

void loop(){
	digitalWrite(pin,HIGH); //Turn on led
	delay(1000);

	digitalWrite(pin,LOW); //turn off led
	delay(1000);
}