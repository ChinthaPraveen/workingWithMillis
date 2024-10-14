#define redLED 5  // Connect redLED to pin number 5
unsigned long LED_Previous = 0;
const unsigned long LED_event = 1000;// Time required for which state change will occur 
unsigned long Current_Millis;
void setup() 
{
  pinMode(redLED, OUTPUT); // Set redLED as OUTPUT
}

void loop() 
{

  Current_Millis = millis();
  if(Current_Millis - LED_Previous >= LED_event)
  {
    LED_Previous = millis(); // Store current millis in LED_Previous
    digitalWrite(redLED, ~digitalRead(redLED)); // Toggle the state of the LED
  }

}