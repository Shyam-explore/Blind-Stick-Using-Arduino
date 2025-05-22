---

# Arduino Blind Stick

The Arduino Blind Stick is a project aimed at assisting visually impaired individuals in navigating their surroundings safely. This project utilizes an Arduino Uno microcontroller board along with an ultrasonic sensor, buzzer, and vibration motor to detect obstacles and provide feedback to the user.

## Features

- **Obstacle Detection:** Utilizes an ultrasonic sensor to measure the distance from obstacles in the user's path.
- **Alert System:** Alerts the user with both audio (buzzer) and tactile (vibration motor) feedback when an obstacle is detected within a specified range.
- **Adjustable Threshold:** The threshold distance for obstacle detection can be easily adjusted to suit different environments and user preferences.

## Hardware Requirements

To build the Arduino Blind Stick, you will need the following components:

- Arduino Uno microcontroller board
- Ultrasonic sensor (HC-SR04 or similar)
- Buzzer
- Vibration motor
- Jumper wires

## Usage

1. **Connect Components:** Connect the ultrasonic sensor, buzzer, and vibration motor to the appropriate pins on the Arduino Uno board as specified in the code.
2. **Upload Code:** Upload the provided Arduino sketch (`blind_stick.ino`) to the Arduino Uno using the Arduino IDE or any compatible development environment.
3. **Power On:** Power the Arduino Uno using a suitable power source (e.g., USB cable connected to a computer or a battery pack).
4. **Navigate:** Once powered, the blind stick will continuously monitor the environment for obstacles. When an obstacle is detected within the specified range, the buzzer will emit an audible alert, and the vibration motor will provide tactile feedback to the user.

## Notes

- **Adjust Threshold:** Modify the threshold distance in the code according to your specific requirements and the capabilities of your hardware.
- **Ensure Proper Connections:** Make sure to establish proper connections between the Arduino Uno, ultrasonic sensor, buzzer, and vibration motor to ensure functionality.
- **Contribute:** Feel free to contribute to this project by suggesting improvements, reporting issues, or submitting pull requests!

## License

This project is licensed under the [MIT License](LICENSE).
