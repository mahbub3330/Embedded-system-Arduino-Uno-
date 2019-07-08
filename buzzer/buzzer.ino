//buzzer to make a beep

int buzzPin = 9;

void setup(){

  	pinMode(buzzPin,OUTPUT);

}

void loop(){

  	tone(buzzPin, 1000); 
  	delay(1000);
  
  	noTone(buzzPin);     
  	delay(1000);     
  
}