# ECE-Army-Robotics - Arduino Experiments

## Experiment 1 – LED, Buzzer, and Servo Control with Pushbutton

### Components Used
- Arduino UNO
- 1 x LED (with resistor)
- 1 x Pushbutton
- 1 x Buzzer (active/passive)
- 1 x Servo motor
- Jumper wires, breadboard

### Circuit Connections
- LED → Pin 9
- Buzzer → Pin 8
- Servo Signal → Pin 6
- Pushbutton → Pin 7 (INPUT_PULLUP)
- GND and 5V as required

### Working
1. When pushbutton is pressed:
   - LED blinks **3 times** (1s ON, 0.5s OFF).
   - Buzzer beeps **2 times** (1s ON, 1s OFF).
   - Servo rotates to **45°**, holds for 1s, then returns to 0°.

2. When pushbutton is not pressed:
   - LED OFF, Buzzer OFF, Servo stays at 0°.
  
**###Code**

See 'Experiment-1/Expt1.ino'

### Demo
- 📸 [Circuit photo](Circuit_photo.jpeg)
- 🎥 [Demo video](Demo_video.mp4)
