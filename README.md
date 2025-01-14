# digital-and-along-sensor
# digital sensor
Components:
Arduino Uno: The main microcontroller.
PIR Sensor: Motion sensor connected to digital pin 10.
Red LED (connected to pin 8): Indicates no motion detected.
Blue LED (connected to pin 12): Indicates motion detected.
Two Resistors: To limit current through the LEDs.
Breadboard: For assembling the components.
Jumper Wires: To connect the components.
What will happen when the code runs?
If motion is detected by the PIR sensor:

The red LED (pin 8) will turn off.
The blue LED (pin 12) will turn on.
If no motion is detected:

The red LED (pin 8) will turn on.
The blue LED (pin 12) will turn off.
Main idea: The system switches the LEDs' states to indicate whether motion is detected or not.
![Screenshot 2025-01-14 113954](https://github.com/user-attachments/assets/fb415fff-f448-4f45-a29b-505772a18ecc)
# along-sensor
Components:
Arduino Uno: The microcontroller board.
LM35 Temperature Sensor: A sensor that measures temperature in Celsius.
Resistor: Used for stability in the circuit.
Breadboard: For connecting and holding components.
Jumper Wires: To connect the Arduino to the temperature sensor.
What Happens When the Code Runs?
The Arduino reads the analog value from the LM35 temperature sensor (connected to analog pin A1).
The analog value is converted to millivolts (mV).
The millivolt value is then converted to degrees Celsius using the LM35's formula:
1°C = 10 mV.
The temperature in Celsius is printed to the Serial Monitor every second (delay(1000)).
![Screenshot 2025-01-14 115810](https://github.com/user-attachments/assets/9e6b135a-eedf-411b-b046-354d7c680224)
