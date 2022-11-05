const int LED_1_PIN = 5;
const int LED_2_PIN =6;
const int LED_3_PIN =7;
const int BUTTON_PIN= 4;
int state = 0;
void setup() {
  
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

}

void loop() {
 
   byte buttonState = digitalRead(BUTTON_PIN); 
  if (buttonState == LOW) {
    digitalWrite(LED_1_PIN, LOW);
    digitalWrite(LED_2_PIN, HIGH);
    digitalWrite(LED_3_PIN, LOW);  
    
  }
  else {
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, LOW);
    digitalWrite(LED_3_PIN, HIGH);  
    
  }
}
