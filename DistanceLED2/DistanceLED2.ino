#include <FastLED.h>

//Setup the variables for the HC-SR04
const int trigPin = 3;
const int echoPin = 2;

int inputPin = 2;               // choose the input pin (for PIR sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the pin status

int ledPin = 5;                // choose the pin for the LED
//Setup the variables for the NeoPixel Strip

// How many leds in your strip?
#define NUM_LEDS 35

// What pin is the NeoPixel's data line connected to?
#define DATA_PIN 5

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup()
// initialize serial communication:
{
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
  pinMode(10, INPUT);//touch sensor
  Serial.begin(9600);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop()
{
  
  // establish variables for duration of the ping,
  // and the distance result in inches and centimeters:
  long duration, inches, cm;

  // The sensor is triggered by a HIGH pulse of
  //10 or more microseconds.
  // Give a short LOW pulse beforehand to
  //ensure a clean HIGH pulse:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {  
    leds[0] = CRGB::Purple;
    FastLED.show();
    leds[1] = CRGB::Purple;
    FastLED.show();
    leds[2] = CRGB::Purple;
    FastLED.show();
    leds[3] = CRGB::Purple;
    FastLED.show();
    leds[4] = CRGB::Purple;
    FastLED.show();
    leds[5] = CRGB::Purple;
    FastLED.show();
    leds[6] = CRGB::Purple;
    FastLED.show();
    leds[7] = CRGB::Purple;
    FastLED.show();
    leds[8] = CRGB::Purple;
    FastLED.show();
    leds[9] = CRGB::Purple;
    FastLED.show();// check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH){
      // we have just turned of
      Serial.println("Motion ended!");
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
  
  if (digitalRead(10) == HIGH) {//touch sensor
     leds[0] = CRGB::Blue;
    FastLED.show();
    leds[1] = CRGB::Blue;
    FastLED.show();
    leds[2] = CRGB::Blue;
    FastLED.show();
    leds[3] = CRGB::Blue;
    FastLED.show();
    leds[4] = CRGB::Blue;
    FastLED.show();
    leds[5] = CRGB::Blue;
    FastLED.show();
    leds[6] = CRGB::Blue;
    FastLED.show();
    leds[7] = CRGB::Blue;
    FastLED.show();
    leds[8] = CRGB::Blue;
    FastLED.show();
    leds[9] = CRGB::Blue;
    FastLED.show();
    Serial.println("Sensor is touched");
    delay(500);//if you want to see the actual blue 
  }

  if (inches < 5) {
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

  if (inches  > 5 && inches < 10) {
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

  if (inches  > 10 && inches < 15) {
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

  if (inches  > 15 && inches < 20) {
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

  if (inches  > 20 && inches < 25) {
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

  if (inches  > 25 && inches < 30) {
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

  if (inches  > 30 && inches < 35) {
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

  if (inches  > 35 && inches < 40) {
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
  if (inches  > 40 && inches < 45) {
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

  if (inches  > 40 && inches < 44) {
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

  if (inches  > 45) {
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

  //if (inches <= 50)  {fill_solid( &(leds[0]), NUM_LEDS, CRGB::Blue);
  // FastLED.show();
  //}

  //else if (inches >= 51) {fill_solid( &(leds[0]), NUM_LEDS, CRGB::Black);
  // FastLED.show();
  //}
  //delay(100);
}

long microsecondsToInches(long microseconds)
{
  // According to Parallax's datasheet for the PING))), there are
  // 73.746 microseconds per inch (i.e. sound travels at
  //1130 feet per second).  This gives the distance travelled
  //by the ping, outbound and return, so we divide by 2 to get the
  //distance of the obstacle.
  //See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per
  // centimeter. The ping travels out and back, so to find
  //the distance of the object we take half of the distance
  //travelled.
  return microseconds / 29 / 2;
}