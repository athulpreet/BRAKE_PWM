int PWM_pin = 2; // LED pin for Arduino Uno (D9)
int val=0;
int pot_pin=A2;
int input_pin=A3;
int volatile freq=0;
int volatile adc=0;
void setup() {
  Serial.begin(9600);
  pinMode(PWM_pin, OUTPUT);
  pinMode(pot_pin, INPUT);
   pinMode(input_pin, INPUT);
}

void loop() {

  
val=analogRead(input_pin);
if(val<450){
 adc = analogRead(pot_pin);
// // Serial.println(freq);
 freq=map(adc,0,1023,0,1000);  
  
  digitalWrite(PWM_pin,HIGH);
//  digitalWrite(1,HIGH);
  delay(freq);
  digitalWrite(PWM_pin,LOW);
//  digitalWrite(1,LOW);
  delay(freq);


}
else if(val>=450){
    digitalWrite(PWM_pin,LOW);
  digitalWrite(1,LOW);
}
}
