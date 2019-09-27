int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//starts up the arduino
  pinMode(2, OUTPUT); //chooses pin slot on arduino
  pinMode(3, OUTPUT);
}

void loop() {
  count = count + 1;
  Serial.println(count);
  if (count < 6) {
    digitalWrite(2, HIGH); //high means on
    delay(500);//delay is a pause between the next code, and the number is in miliseconds
    digitalWrite(2, LOW); //low means off
    delay(500);
  }
  else if (count < 11) {
    digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    delay(500);
  }
  else if (count < 12) {
    Serial.println("done");
  }
  else{
    delay(1000);
  }
  
  
}
