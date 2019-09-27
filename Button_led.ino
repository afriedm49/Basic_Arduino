
int ledPin = 2;
int buttonPin = 12;
int state;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly
  state = digitalRead(buttonPin);
  if(state ==  HIGH){
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
}
