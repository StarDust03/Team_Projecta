/*
 5.1.19
 Creators: Juan Salcedo, Lauren Meade
 We are designing a program that allows you 
 to turn a potentionmeter and turns on different LEDS
 */


const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

int ledpinBlue = 12;
int ledpinYellow = 11;
int ledpinRed = 8;
int ledpinGreen = 13;
const int thresholdBlue = 6;
const int thresholdYellow = 4;
const int thresholdRed = 2;
const int thresholdGreen = 8;

void setup()
{
  pinMode(ledpinRed, OUTPUT);
  pinMode(ledpinGreen, OUTPUT);
  pinMode(ledpinBlue, OUTPUT);
  pinMode(ledpinYellow, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(ledpinBlue, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  
  if (distance > thresholdYellow) {
    digitalWrite(ledpinYellow, HIGH);
  } else {
    digitalWrite(ledpinYellow, LOW);
  }
  
  if (distance > thresholdRed) {
    digitalWrite(ledpinRed, HIGH);
  } else {
    digitalWrite(ledpinRed, LOW);
  }
  
  if (distance > thresholdBlue) {
    digitalWrite(ledpinBlue, HIGH);
  } else {
    digitalWrite(ledpinBlue, LOW);
  }
  
  if (distance > ledpinGreen) {
    digitalWrite(ledpinGreen, HIGH);
  } else {
    digitalWrite(ledpinGreen, LOW);
  }
    
  Serial.println(distance);
  delay(1);
}
