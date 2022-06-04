// C++ code
//
 int led_r=7;
int led_v=8;
int capteur=A0;
int  buz=3;

  
void setup()
{
  Serial.begin(9600);
  pinMode(led_r, OUTPUT);
   pinMode(led_v, OUTPUT);
  pinMode(capteur, INPUT);
  pinMode(buz, OUTPUT);
}

void loop()
  
{  analogRead(capteur);
    Serial.println(capteur);
  if(analogRead(capteur)>15){
  digitalWrite(led_v, LOW);
  digitalWrite(led_r, HIGH);
 // delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(buz, HIGH);
 // delay(1000);
  
 // delay(1000); // Wait for 1000 millisecond(s)
}
 else{
     digitalWrite(led_r, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(buz, LOW);
 // delay(1000);
  digitalWrite(led_v, HIGH);
  // delay(1000); // Wait for 1000 millisecond(s)
 }
    
  
 
}
