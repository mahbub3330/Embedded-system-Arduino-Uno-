//micro servo 9g 

#include<Servo.h>

Servo s;
int angle = 0;
int servoPIn = 10;

void setup(){
	
	s.attach(servoPIn);
}

void loop(){
	
	for(angle = 0; angle<180; angle++){
		s.write(angle);
		delay(1000);
	}

	for(angle = 180; angle>0; angle--){
		s.write(angle);
		delay(1000);
	}
}