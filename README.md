## Servo Control with Potentiometer Assignment

In this assignment, you will create an Arduino project that uses a potentiometer to control the position of a servo motor. You'll also implement serial communication to monitor the system's status and add an optional emergency shutoff feature.

### Basic Requirements

1. **Hardware Setup**:
   - Connect a potentiometer to an analog input pin
   - Connect a servo motor to a PWM-capable digital pin
   - Use appropriate power and ground connections

2. **Software Implementation**:
   - Import the Servo library
   - Initialize the servo and set up serial communication
   - Use analogRead() to get potentiometer values
   - Map potentiometer values to servo positions
   - Update servo position based on potentiometer input
   - Print potentiometer value and servo position to Serial Monitor

### Extra Credit: Emergency Shutoff

For extra credit, implement an emergency shutoff system:

1. **Additional Hardware**:
   - Connect a pushbutton to a digital input pin
   - Add an LED to a digital output pin as an indicator light

2. **Software Enhancements**:
   - Implement button debouncing
   - Use a boolean variable to track system state
   - Toggle system state when button is pressed
   - Control LED based on system state
   - Only update servo position when system is active

## Submission Requirements

1. Submit a complete Arduino sketch here that fulfills the basic requirements
2. Provide a brief written explanation of how your code works in a new .md file here.
3. For extra credit: Include the emergency shutoff feature in your code and explain its implementation
4. Shoot a video of it working and submit it here.

## Evaluation Criteria

- Correct implementation of potentiometer reading and servo control
- Proper use of the Servo library and analogRead() function
- Accurate serial output of potentiometer and servo values
- Code organization and comments
- Extra credit: Successful implementation of emergency shutoff feature

Good luck, and have fun with your servo control project!
