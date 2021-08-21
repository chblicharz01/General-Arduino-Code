const int kLED1 = 11;


void setup() 
{
  pinMode(kLED1, OUTPUT);

}

void loop() 
{
  digitalWrite (kLED1, HIGH);
  delay(1000);
  digitalWrite (kLED1, LOW);
  delay(1000);
}
