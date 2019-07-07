//simple led on/off (Dimming/fading)
int pin = 11;
int i;

void setup(){
	pinMode(pin,OUTPUT);
}

void loop(){
	for (i=0;i<=255;i++){
	    analogWrite(pin,i); //light up slowly
	    delay(100);
	}

	for (i=255;i>=0;i--){
	    analogWrite(pin,i); //light down slowly
	    delay(100);
	}
}