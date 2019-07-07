//object detect using PIR(passive inferred sensor)

int ledPin = 11;
int pirPin = 3;
int check;

void setup(){
	
	pinMode(ledPin,OUTPUT);
	pinMode(pirPin,INPUT);
}

void loop(){
	
	check = digitalRead(pirPin);

	if (check == HIGH){
		digitalWrite(ledPin,HIGH);
		delay(1000);
	}

	else{
		digitalWrite(ledPin,LOW);
		delay(1000);
	} 

}