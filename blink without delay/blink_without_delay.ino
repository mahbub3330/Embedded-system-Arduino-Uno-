//blink without delay

const int ledPin = 11;
int ledstate = LOW;
unsigned long previousmillis = 0;
cont int interval = 1000;

void setup(){
	
	pinMode(ledPin,OUTPUT);
}

void loop(){
	
	unsigned long currentmillis = millis(); //Returns the number of milliseconds passed since the Arduino board began running the current program.


	if(currentmilli - previousmillis >= interval){

		previousmillis = currentmillis;

		if(ledstate == LOW){
			ledstate = HIGHT;
		}
		else{
			ledstate = LOW;
		}

		digitalWrite(ledPin,ledstate);
	}

	
}