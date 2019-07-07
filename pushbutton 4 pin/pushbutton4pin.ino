/*push button with 4 pin.when button is pressed
then it gives low voltage */

int pushPin = 3;
int ledPin = 11;
int status;

void setup(){
	
	pinMode(pushPin,INPUT);
	pinMode(ledPin,OUTPUT);
}

void loop(){
	
	status = digitalRead(pushPin);

	if (status == HIGH){
		digitalWrite(ledPin,HIGH);
		delay(1000);
	}

	else{
		digitalWrite(ledPin,HIGH);
		delay(1000);	
	}
}