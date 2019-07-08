//Relay 

int relayPin = 3;

void setup(){
	
	pinMode(relayPin,OUTPUT);
}

void loop(){
	
	digitalWrite(relayPin,HIGHT);
	delay(1000);

	digitalWrite(relayPin,LOW);
}