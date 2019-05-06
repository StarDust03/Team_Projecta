/*
 5.1.19
 Creators: Juan Salcedo, Lauren Meade
 We are designing a program that allows you 
 to turn a potentionmeter and turns on different LEDS
 */


int analogPin = A0;
int ledpinBlue = 12;
int ledpinGreen = 11;
int ledpinYellow = 10;
int ledpinOrange = 9;
int ledpinRed = 8;
const int thresholdBlue = 100;
const int thresholdGreen = 200;
const int thresholdYellow = 300;
const int thresholdOrange = 400;
const int thresholdRed = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpinRed, OUTPUT);
  pinMode(ledpinOrange, OUTPUT);
  pinMode(ledpinYellow, OUTPUT);
  pinMode(ledpinGreen, OUTPUT);
  pinMode(ledpinBlue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int analogValue = analogRead(analogPin);
  
  if (analogValue > thresholdGreen) {
    digitalWrite(ledpinGreen, HIGH);
  } else {
    digitalWrite(ledpinGreen, LOW);
  }
  
  if (analogValue > thresholdYellow) {
    digitalWrite(ledpinYellow, HIGH);
  } else {
    digitalWrite(ledpinYellow, LOW);
  }

  if (analogValue > thresholdOrange) {
    digitalWrite(ledpinOrange, HIGH);
  } else {
    digitalWrite(ledpinOrange, LOW);
  }
  
  if (analogValue > thresholdRed) {
    digitalWrite(ledpin Red, HIGH);
  } else {
    digitalWrite(ledpinRed, LOW);
  }
  
  
  if (analogValue > thresholdBlue) {
    digitalWrite(ledpinBlue, HIGH);
  } else {
    digitalWrite(ledpinBlue, LOW);
  }
  
  Serial.println(analogValue);
  delay(1);
}
