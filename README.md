# workingWithMillis
## How It Works
- **millis()**: This function returns the number of milliseconds since the Arduino was powered on. It allows for precise time tracking without halting other operations.
- **Non-blocking LED Blink**: By using millis(), the LED can blink at regular intervals while allowing the rest of the program to continue running.
## Key Concepts
**Storing Time**: millis() is stored in an unsigned long variable to track the current time.
**Event Period**: The time interval for LED state change is defined by the Event_Period variable.
**Previous Time Tracking**: The last time the LED changed state is tracked using a LED_Previous variable.
