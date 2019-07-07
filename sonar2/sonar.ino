//sonar or ultrasonic sensor with 4 pin 

int trig = 3;
int echo = A5;

void setup(){
	
	Serial.begin(9600);
	pinMode(trig,OUTPUT);
	pinMode(echo,INPUT);
}

void loop(){
	
	digitalWrite(trig,LOW);
	delayMicroseconds(2);

	digitalWrite(trig,HIGH);
	delayMicroseconds(10);

	digitalWrite(trig,LOW);

	float duration = pulseIn(echo,HIGH); //duration in ms
	float distance = duration * 0.034/2; //distance in cm

	Serial.println(distance);
}