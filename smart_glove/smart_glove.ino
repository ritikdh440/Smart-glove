void setup() {
 Serial.begin(9600);
 pinMode(2, INPUT_PULLUP);
 pinMode(3, INPUT_PULLUP);
 pinMode(4, INPUT_PULLUP);
 pinMode(5, INPUT_PULLUP);
 pinMode(6, INPUT_PULLUP);
 pinMode(7, INPUT_PULLUP);
 pinMode(8, INPUT_PULLUP);
 pinMode(9, INPUT_PULLUP);
 pinMode(10,INPUT_PULLUP);
 pinMode(11,INPUT_PULLUP);
 pinMode(13,INPUT_PULLUP);

}

void loop() {
   byte sensorVal1 = digitalRead(2);
   if (sensorVal1 == LOW) 
   {
        Serial.println("I am happy");
        delay(1000);
   }
   byte sensorVal2 = digitalRead(3);
   if (sensorVal2 == LOW) 
   {
        Serial.println("I want Water ");
          delay(1000);
   }
   byte sensorVal3 = digitalRead(4);
   if (sensorVal3 == LOW) 
   {
        Serial.println("Call the Doctor");
          delay(1000);
   }
   byte sensorVal4 = digitalRead(5);
   if (sensorVal4 == LOW) 
   {
        Serial.println("I want my medicines");
          delay(1000);
   }
   byte sensorVal5 = digitalRead(6);
   if (sensorVal5 == LOW) 
   {
        Serial.println("We are team Technocrats");
          delay(1000);
   }
   byte sensorVal6 = digitalRead(7);
   if (sensorVal6 == LOW) 
   {
        Serial.println("Call the doctor");
          delay(1000);
   }
}
  
