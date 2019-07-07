//how motor driver L293D works

int enablePin = 2;
int inputPin1 = 3;
int inputPin2 = 5;

void setup(){
	
	pinMode(enablePin,OUTPUT);
	pinMode(inputPin1,OUTPUT);
	pinMode(inputPin2,OUTPUT);

	digitalWrite(enablePin,HIGH); // gives 5v to enable l293d
}

void loop(){
	
	digitalWrite(inputPin1,HIGH);
	digitalWrite(inputPin2,LOW);
	delay(1000);
}