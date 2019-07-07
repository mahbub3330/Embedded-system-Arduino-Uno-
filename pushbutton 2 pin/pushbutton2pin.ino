/*push button with 2 pin.when button is pressed
then it gives HIGH voltage */

int pushPin = 3;
int ledPin = 11;
int status,i;

void setup(){
	
	pinMode(pushPin,INPUT);
	pinMode(ledPin,OUTPUT);
}

void loop(){
	
	status = digitalRead(pushPin);

	if (status == HIGH){
		for (i=0;i<=255;i++){
	    analogWrite(pin,i); //light up slowly
	    delay(100);
		}

	}

	else{
		for (i=255;i>=0;i--){
	    analogWrite(pin,i); //light down slowly
	    delay(100);
		}	
	}
}