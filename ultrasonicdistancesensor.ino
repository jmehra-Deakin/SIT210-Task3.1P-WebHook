// This #include statement was automatically added by the Particle IDE.
#include <HC-SR04.h>

const int triggerPin = A1;
const int echoPin = D2;
HC_SR04 rangefinder = HC_SR04(triggerPin, echoPin);

void setup()
{
  //  Serial.begin(9600);
   
    rangefinder.init();
}

void loop()
{
    unsigned long start = micros();
    float inch = rangefinder.distInch();
    Serial.printf("Distance in inches: %.2f\n", inch);
    
     Particle.publish("DistanceReading", String(inch), PRIVATE);

    }
    
}
