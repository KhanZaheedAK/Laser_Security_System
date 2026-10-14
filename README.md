# Laser Security Alarm System 🚨

An Arduino UNO R4 WiFi based laser security alarm that detects interruptions in a laser beam using a photoresistor module and activates a visual and audible alert.

**Developed by Robotics With ZK**

## 📌 Project Overview

This project demonstrates a basic laser-based intrusion detection system. A laser beam is directed toward a photoresistor module. When an object interrupts the beam, the Arduino detects the change in the sensor reading and activates a red LED and buzzer.

The project demonstrates sensor interfacing, digital output control, analog input reading, and basic automation logic.

## ✨ Features

- Laser beam interruption detection
- Real-time photoresistor readings
- Red LED visual alarm
- Buzzer audio alert
- Serial Monitor status messages
- Arduino-based detection logic

## 🧰 Components Required

- Arduino UNO R4 WiFi
- 3-pin laser module
- Photoresistor (LDR) sensor module with analog output
- Red LED
- 220–330 Ω resistor for the LED
- Active or passive buzzer compatible with the Arduino output
- Breadboard
- Jumper wires
- USB cable for programming and power

## 🔌 Circuit Connections

| Component | Arduino Pin |
|---|---|
| Laser module signal (S) | D7 |
| Laser module VCC (+) | 5V |
| Laser module GND (−) | GND |
| LDR module signal (S) | A0 |
| LDR module VCC (+) | 5V |
| LDR module GND (−) | GND |
| Red LED anode through resistor | D5 |
| Red LED cathode | GND |
| Buzzer positive | D6 |
| Buzzer negative | GND |

**Note:** Check the pin labels on your specific laser and sensor modules before powering the circuit. Module pin layouts may vary.

## ⚙️ How It Works

1. The Arduino turns on the laser module through D7.
2. The laser beam shines onto the photoresistor.
3. The Arduino continuously reads the sensor's analog value through A0.
4. When the beam is interrupted, the light reading changes.
5. If the reading crosses the configured threshold, the Arduino turns on the red LED and activates the buzzer.
6. When the beam reaches the sensor again, the alarm turns off.

## 📊 Observed Sensor Readings

During initial testing, the following readings were observed:

- **Laser beam reaching the LDR:** approximately 0–2
- **Laser beam not reaching the LDR:** approximately 26–29

These values are specific to the tested setup and may change with room lighting, sensor adjustment, and module variation.

The current code uses a threshold of `15` to distinguish between the two conditions.

## 💻 Software Requirements

- Arduino IDE
- Arduino UNO R4 board support package
- Serial Monitor set to 9600 baud

## 🚀 Upload Instructions

1. Connect the Arduino UNO R4 WiFi to your computer.
2. Open the Arduino IDE.
3. Select the Arduino UNO R4 WiFi board and the correct port.
4. Open `code/Laser_Security_Alarm.ino`.
5. Upload the program.
6. Open Serial Monitor at 9600 baud.
7. Aim the laser at the photoresistor and verify the readings.
8. Interrupt the beam and observe the alarm response.

## 🧪 Expected Output

When the beam reaches the LDR:

```text
BEAM RECEIVED
```

When the beam is interrupted:

```text
BEAM INTERRUPTED! ALARM ACTIVATED!
```

The red LED and buzzer activate during the alarm condition.

## 🔧 Troubleshooting

**Laser does not turn on**
- Verify the module's VCC and GND connections.
- Check that the signal pin is connected to D7.
- Confirm that the module supports control through its signal pin.

**LDR readings do not change**
- Confirm that the sensor signal is connected to A0.
- Check the sensor's power and ground.
- Verify that the laser beam reaches the sensor directly.
- Test the sensor under different lighting conditions.

**Alarm stays on continuously**
- Compare readings with the beam received and interrupted.
- Adjust `LIGHT_THRESHOLD` to a value between the two observed ranges.
- Confirm that the detection condition matches the sensor's actual behaviour.

**Buzzer does not sound**
- Check polarity and wiring.
- Confirm the buzzer type and its electrical requirements.
- Use a suitable driver circuit if the buzzer exceeds the Arduino pin's output capability.

## 🔮 Future Improvements

- Multiple status LEDs
- Adjustable detection threshold
- Alarm mute and reset controls
- LCD or OLED status display
- Wireless status monitoring
- Improved enclosure and sensor alignment

## ⚠️ Safety

Never point the laser toward anyone's eyes. Keep the beam directed at the sensor or a safe, non-reflective target.

## 👨‍💻 Developed By

**Robotics With ZK**

Learning robotics through real projects, experiments, and practical engineering.

Follow the project as it develops and stay tuned for future upgrades!
