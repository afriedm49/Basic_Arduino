int ledPin1 = 2;// A variable is a way to make the code easier, so you do not have to rewrite the same thing over and over again
float delayVar = 1000;

void setup() {
  // The purpose of setup is to put stuff only needed once, to setup the code.
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
}

void loop() {  // The purpose of loop is to repeat things many times.
  // put your main code here, to run repeatedly:
  Serial.println(delayVar / 1000);
    digitalWrite(ledPin1, HIGH);
    delay(delayVar);
    digitalWrite(ledPin1, LOW);
    delay(delayVar);
    
  if (delayVar > 200) {
    delayVar = delayVar - 100;
  }
  else{
    ledPin1 = 3; 
  }
}
// You want us to use the serial monitor in order to make sure that the code works perfectly.
