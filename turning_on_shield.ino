/*Turn on through Software. If the JP is soldered,run the following code, the SIM808 will POWER on or POWER off.*/

int Powerkey = 9;
void setup() {                
  pinMode(Powerkey, OUTPUT);   // initialize the digital pin as an output.  
  power();                     //power on the sim808 or power down the sim808
}
void loop() 
{

}

void power(void)
{
  digitalWrite(Powerkey, LOW); 
  delay(1000);               // wait for 1 second
  digitalWrite(Powerkey, HIGH);
}

