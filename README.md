# Automated-Pesticide-Spraying-Robot


This project involves an Arduino-based robot that can be controlled via Bluetooth communication. The robot can move forward, backward, turn left, turn right, stop, and control two DC pumps. Additionally, it features two servo motors for controlling the robot's orientation.



## Table of Contents

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Commands](#commands)
- [Hardware Connections](#hardware-connections)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The Bluetooth Controlled Arduino Robot is a small-scale robot that can be wirelessly controlled using a Bluetooth-enabled device, such as a smartphone or a computer. The robot is equipped with two wheels on either side, which can be driven independently to enable movements in different directions.

## Getting Started

To get started with the robot, follow these steps:

1. Connect the robot's hardware components, including the DC motors, servo motors, and Bluetooth module, as per the circuit diagram provided in the 'Circuit Diagram' section.

2. Upload the provided Arduino sketch (`robot_control.ino`) to your Arduino board using the Arduino IDE.

3. Once the code is successfully uploaded, power on the robot.

4. Pair your Bluetooth-enabled device with the robot's Bluetooth module. The default Bluetooth communication baud rate is set to 9600.

5. Use a Bluetooth terminal app on your device to send control commands to the robot. Refer to the 'Commands' section below for available commands.

## Commands

The robot can be controlled using the following commands:

- `F`: Move forward
- `B`: Move backward
- `R`: Turn right
- `L`: Turn left
- `S`: Stop (brake)
- `I`: Move the right wheel independently forward
- `G`: Move the right wheel independently backward
- `H`: Move the left wheel independently forward
- `J`: Move the left wheel independently backward
- `X`: Set both servo motors to an angle of 45 degrees
- `Y`: Activate both DC pumps
- `W`: Set both servo motors to an angle of 130 degrees
- `Z`: Deactivate both DC pumps and set both servo motors to 0 degrees


## Hardware Connections

Connect the following components to the corresponding Arduino pins:

- Pin 0 (RX): Connect to the TX pin of the Bluetooth module.
- Pin 1 (TX): Connect to the RX pin of the Bluetooth module.
- Pin 2: Connect to the left DC motor input 4 (IN4).
- Pin 3: Connect to the left DC motor input 3 (IN3).
- Pin 4: Connect to the right DC motor input 2 (IN2).
- Pin 5: Connect to the right DC motor input 1 (IN1).
- Pin 7: Connect to the control input of Servo motor 1 (for example, for orientation).
- Pin 8: Connect to the control input of Servo motor 2 (for example, for orientation).
- A0: Connect to the enable input for the right DC motor (ENB2).


## Contributing

If you would like to contribute to this project, you can:

- Report issues or bugs
- Suggest new features or enhancements
- Submit pull requests

Please follow the standard GitHub workflow when contributing.

## License

This project is licensed under the [MIT License](LICENSE).

