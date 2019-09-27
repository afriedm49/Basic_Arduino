int ledPin = 2;
int ledPin2 = 4;
int buttonPin2 = 8;
int buttonPin = 12;
int buttonState;
int buttonState2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);
pinMode(buttonPin2, INPUT);
pinMode(ledPin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);
buttonState2 = digitalRead(buttonPin2);
if (buttonState == HIGH) {
  digitalWrite (ledPin, HIGH);
  delay(250);
  digitalWrite (ledPin, LOW);
  delay(250);
}
else if (buttonState == LOW) {
  digitalWrite (ledPin, LOW);
}
if (buttonState2 == HIGH) {
  digitalWrite (ledPin2, HIGH);
  delay(250);
  digitalWrite (ledPin2, LOW);
  delay(250);
}
else if (buttonState2 == LOW) {
  digitalWrite (ledPin2, LOW);
}
}
