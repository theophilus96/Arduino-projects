// defines pins numbers
#include <FastLED.h>

#define LED_PIN     5 // Connected Wire
#define NUM_LEDS   10 // Number of Leds
#define BRIGHTNESS  64
//#define LED_TYPE    WS2811 //Type
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 100<br>
const int trigPin = 3;
const int echoPin = 2;


// defines variables
long duration;
int distance;

void setup() {
  delay( 3000 ); // power-up safety delay
   // FastLED.addLeds(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
    FastLED.setBrightness(  BRIGHTNESS );
  
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(115200); // Starts the serial communication
}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

// Add code here
if (distance < 5) {
     leds[0] = CRGB::Green; 
        FastLED.show();    
       leds[1] = CRGB::Green; 
        FastLED.show(); 
        leds[2] = CRGB::Green; 
        FastLED.show(); 
        leds[3] = CRGB::Green; 
        FastLED.show(); 
        leds[4] = CRGB::Green; 
        FastLED.show();
         leds[5] = CRGB::Green; 
        FastLED.show(); 
        leds[6] = CRGB::Green; 
        FastLED.show(); 
        leds[7] = CRGB::Green; 
        FastLED.show(); 
        leds[8] = CRGB::Green; 
        FastLED.show();  
        leds[9] = CRGB::Green; 
        FastLED.show();  
  }

    if (distance  > 5 && distance < 10) {
        leds[0] = CRGB::Green; 
        FastLED.show(); 
          leds[1] = CRGB::Green; 
        FastLED.show(); 
        leds[2] = CRGB::Green; 
        FastLED.show(); 
        leds[3] = CRGB::Green; 
        FastLED.show(); 
        leds[4] = CRGB::Green; 
        FastLED.show();
         leds[5] = CRGB::Green; 
        FastLED.show(); 
        leds[6] = CRGB::Green; 
        FastLED.show(); 
        leds[7] = CRGB::Green; 
        FastLED.show(); 
        leds[8] = CRGB::Green; 
        FastLED.show();   
        leds[9] = CRGB::Black; 
        FastLED.show();  
    }

   if (distance  > 10 && distance < 15) {
     leds[0] = CRGB::Green; 
        FastLED.show(); 
          leds[1] = CRGB::Green; 
        FastLED.show(); 
        leds[2] = CRGB::Green; 
        FastLED.show(); 
        leds[3] = CRGB::Green; 
        FastLED.show(); 
        leds[4] = CRGB::Green; 
        FastLED.show();
         leds[5] = CRGB::Green; 
        FastLED.show(); 
        leds[6] = CRGB::Green; 
        FastLED.show(); 
        leds[7] = CRGB::Green; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
    }

     if (distance  > 15 && distance < 20) {
       leds[0] = CRGB::Green; 
        FastLED.show(); 
          leds[1] = CRGB::Green; 
        FastLED.show(); 
        leds[2] = CRGB::Green; 
        FastLED.show(); 
        leds[3] = CRGB::Green; 
        FastLED.show(); 
        leds[4] = CRGB::Green; 
        FastLED.show();
         leds[5] = CRGB::Green; 
        FastLED.show(); 
        leds[6] = CRGB::Green; 
        FastLED.show(); 
        leds[7] = CRGB::Black; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
       
    }

       if (distance  > 20 && distance < 25) {
          leds[0] = CRGB::Orange; 
        FastLED.show(); 
          leds[1] = CRGB::Orange; 
        FastLED.show(); 
        leds[2] = CRGB::Orange; 
        FastLED.show(); 
        leds[3] = CRGB::Orange; 
        FastLED.show(); 
        leds[4] = CRGB::Orange; 
        FastLED.show();
         leds[5] = CRGB::Orange; 
        FastLED.show(); 
        leds[6] = CRGB::Black; 
        FastLED.show(); 
        leds[7] = CRGB::Black; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
    }

        if (distance  > 25 && distance < 30) {
            leds[0] = CRGB::Orange; 
        FastLED.show(); 
       leds[1] = CRGB::Orange; 
        FastLED.show(); 
        leds[2] = CRGB::Orange; 
        FastLED.show(); 
        leds[3] = CRGB::Orange; 
        FastLED.show(); 
        leds[4] = CRGB::Orange; 
        FastLED.show();
         leds[5] = CRGB::Black; 
        FastLED.show(); 
        leds[6] = CRGB::Black; 
        FastLED.show(); 
        leds[7] = CRGB::Black; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
    }

       if (distance  > 30 && distance < 35) {
             leds[0] = CRGB::Orange; 
        FastLED.show(); 
       leds[1] = CRGB::Orange; 
        FastLED.show(); 
        leds[2] = CRGB::Orange; 
        FastLED.show(); 
        leds[3] = CRGB::Orange; 
        FastLED.show(); 
        leds[4] = CRGB::Black; 
        FastLED.show();
         leds[5] = CRGB::Black; 
        FastLED.show(); 
        leds[6] = CRGB::Black; 
        FastLED.show(); 
        leds[7] = CRGB::Black; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
    }

       if (distance  > 35 && distance < 40) {
           leds[0] = CRGB::Orange; 
        FastLED.show(); 
       leds[1] = CRGB::Orange; 
        FastLED.show(); 
        leds[2] = CRGB::Orange; 
        FastLED.show(); 
        leds[3] = CRGB::Black; 
        FastLED.show(); 
        leds[4] = CRGB::Black; 
        FastLED.show();
         leds[5] = CRGB::Black; 
        FastLED.show(); 
        leds[6] = CRGB::Black; 
        FastLED.show(); 
        leds[7] = CRGB::Black; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
    }
     if (distance  > 40 && distance < 45) {
       leds[0] = CRGB::Red; 
        FastLED.show(); 
       leds[1] = CRGB::Red; 
        FastLED.show(); 
        leds[2] = CRGB::Black; 
        FastLED.show(); 
        leds[3] = CRGB::Black; 
        FastLED.show(); 
        leds[4] = CRGB::Black; 
        FastLED.show();
         leds[5] = CRGB::Black; 
        FastLED.show(); 
        leds[6] = CRGB::Black; 
        FastLED.show(); 
        leds[7] = CRGB::Black; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
    }

      if (distance  > 40 && distance < 44) {
           leds[0] = CRGB::Red; 
        FastLED.show(); 
       leds[1] = CRGB::Black; 
        FastLED.show(); 
        leds[2] = CRGB::Black; 
        FastLED.show(); 
        leds[3] = CRGB::Black; 
        FastLED.show(); 
        leds[4] = CRGB::Black; 
        FastLED.show();
         leds[5] = CRGB::Black; 
        FastLED.show(); 
        leds[6] = CRGB::Black; 
        FastLED.show(); 
        leds[7] = CRGB::Black; 
        FastLED.show(); 
        leds[8] = CRGB::Black; 
        FastLED.show();  
        leds[9] = CRGB::Black; 
        FastLED.show(); 
        leds[10] = CRGB::Black; 
        FastLED.show();  
    }
    
      if (distance  > 45) {
           leds[0] = CRGB::Red; 
        FastLED.show();
       leds[1] = CRGB::Red; 
        FastLED.show(); 
        leds[2] = CRGB::Red; 
        FastLED.show(); 
        leds[3] = CRGB::Red; 
        FastLED.show(); 
        leds[4] = CRGB::Red; 
        FastLED.show();
         leds[5] = CRGB::Red; 
        FastLED.show(); 
        leds[6] = CRGB::Red; 
        FastLED.show(); 
        leds[7] = CRGB::Red; 
        FastLED.show(); 
        leds[8] = CRGB::Red; 
        FastLED.show();  
        leds[9] = CRGB::Red; 
        FastLED.show(); 
       
    }

 }
