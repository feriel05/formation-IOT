// C++ code
//
int led=12;
int capteur=8;
int v;
int lum;
int capl=A0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(capteur, INPUT);
  pinMode(capl, INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  v=digitalRead(capteur);
  lum=analogRead(capl);
  Serial.println(lum);
  if(lum < 100){
    if(v==1){
     digitalWrite(led, HIGH);
    }
  }
  else{
    digitalWrite(led, LOW);
  }
    
    
    
}
