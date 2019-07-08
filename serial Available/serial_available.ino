//check is there anything in serial port

void setup(){
	
	Serial.begin(9600);
}

void loop(){
	
	if (Serial.available() > 0){
		Serial.println("there is something in serial port");
	}

	else{
		Serial.println("Nothing in serial port");
	}
}