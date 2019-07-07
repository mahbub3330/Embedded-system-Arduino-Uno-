//ultrasonic or sonar sensor with 3 pin

int sonarPin = 7;
int inches = 0;
int cm = 0;

long readUltrasonicDistance(int pin){

    pinMode(pin, OUTPUT);  

    digitalWrite(pin, LOW);
    delayMicroseconds(2);

    digitalWrite(pin, HIGH);
    delayMicroseconds(10);

    digitalWrite(pin, LOW);
    pinMode(pin, INPUT);

    return pulseIn(pin, HIGH);
}

void setup(){

    pinMode(sonarPin, INPUT);
    Serial.begin(9600);

}

void loop(){

    cm = 0.01723 * readUltrasonicDistance(sonarPin); // in cm
    inches = (cm / 2.54);

    Serial.print(inches);
    Serial.print("in, ");

    Serial.print(cm);
    Serial.println("cm");

    delay(100);
}