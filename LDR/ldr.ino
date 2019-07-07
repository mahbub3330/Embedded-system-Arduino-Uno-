//if Light Dependent Resistor is less than 80 then led will turn on

int ldrPin = A5;
int ledPin = 11;
int value;

void setup(){
	
	Serial.begin(9600);
	pinMode(ldrPin,INPUT);
	pinMode(ledPin,OUTPUT);
}

void loop(){
	
	value = analogRead(ldrPin);
	Serial.println(value); //display value

	if (value >=80){
		digitalWrite(ledPin,LOW);
		delay(1000);
	}

	else{
		digitalWrite(ledPin,HIGH);
		delay(1000);
	}
}