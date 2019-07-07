//display temperature in celsius and fahrenheit

int tempPin = A1;
float value,temp,fer;

void setup(){
	
	Serial.begin(9600);
	pinMode(tempPin,INPUT);
}

void loop(){
	
	value = analogRead(tempPin);

	temp = value*(500/1024); //convert in celsius
	Serial.println(temp);

	fer = ((9/5)*temp)+32; //convert in fahrenheit
	Serial.println(fer);
}