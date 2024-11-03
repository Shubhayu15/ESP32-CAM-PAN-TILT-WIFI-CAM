# 🎥 ESP32-CAM Pan-Tilt System

<div align="center">

![Project Banner](https://github.com/user-attachments/assets/bea6ddab-9588-421c-a9cf-d1fd22205bcf)

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![ESP32](https://img.shields.io/badge/ESP32-CAM-red.svg)](https://www.espressif.com/)
[![Servo](https://img.shields.io/badge/Servo-SG90-orange.svg)](https://components101.com/motors/servo-motor-basics-pinout-datasheet)
[![Thingiverse](https://img.shields.io/badge/Thingiverse-Download_STL-brightgreen.svg)](https://www.thingiverse.com/thing:6805012)

*A WiFi-controlled pan-tilt camera system powered by ESP32-CAM with position memory*

[Features](#✨-features) • [Hardware Required](#🛠️-hardware-required) • [Installation](#📥-installation) • [Usage](#💻-usage) • [Customization](#🎨-customization) • [Contributing](#👥-contributing)

</div>

## ✨ Features

- 📡 Built-in WiFi Access Point
- 🎥 Real-time video streaming
- 🎮 Intuitive web interface control
- 💾 Position memory with non-volatile storage
- 🔄 Smooth pan and tilt movements
- 📱 Mobile-responsive design
- 🛠️ Easy to build and customize

## 🛠️ Hardware Required

Component | Quantity | Notes
----------|----------|-------
ESP32-CAM Module | 1 | Main controller + camera
SG90 Servo Motors | 2 | For pan and tilt movements
3D-Printed Chassis | 1 | [Download STL files](https://www.thingiverse.com/thing:6805012)
FTDI Adapter | 1 | For programming
Pan-Tilt Frame | 1 | Mounting hardware
Jumper Wires | As needed | For connections
5V Power Supply | 1 | 2A recommended

### 🖨️ 3D Printing Instructions

1. Download the STL files from [Thingiverse](https://www.thingiverse.com/thing:6805012)
2. Recommended print settings:
   - Layer Height: 0.2mm
   - Infill: 20%
   - Supports: Yes
   - Material: PLA/PETG
3. Parts to print:
   - Base mount
   - Camera holder
   - Servo brackets
   - Pan-tilt mechanism

### 📋 Circuit Diagram

![Circuit Diagram](https://github.com/user-attachments/assets/5362c858-9ea5-4f86-ad9e-bd8231a87b27)

## 📥 Installation

### Step-by-Step Guide

1. **Hardware Assembly**
   ```bash
   # Follow these connections:
   - ESP32-CAM GPIO 2 -> Pan Servo
   - ESP32-CAM GPIO 13 -> Tilt Servo
   - 5V and GND to both servos
   ```

2. **Software Setup**
   ```bash
   # Clone this repository
   git clone https://github.com/yourusername/ESP32-CAM-PAN-TILT-WIFI-CAM.git
   
   # Open Arduino IDE
   # Install required libraries:
   - ESP32 Board Support
   - ESP32 Camera Driver
   - ESP Preferences
   ```

3. **Upload Process**
   - Upload files in sequence:
     1. `Step1-Check-Servos.ino`
     2. `Step2-Testing-Local-Wifi-Connection.ino`
     3. `Step4-Clear-OLDMemoryDATA.ino`
     4. `Step5-Lock-Servo-Position.ino`
     5. `Step6-Create-Wifi-IP-ForCamera-Final.ino`

## 💻 Usage

1. Power up the system
2. Connect to the ESP32 WiFi AP
   - SSID: `ESP32-CAM-CONTROL`
   - Password: `12345678`
3. Navigate to `http://192.168.4.1`
4. Use the web interface to control camera movement

### 🕹️ Web Interface

![Web Interface](https://github.com/user-attachments/assets/c5e4f08d-9e66-4673-a4d7-bc2682f873b4)

## 🎨 Customization

### Color Scheme

```css
:root {
  --background: #001F3F;    /* Dark Blue */
  --text: #EAD8B1;         /* Light Beige */
  --primary: #6A9AB0;      /* Light Blue */
  --secondary: #3A6D8C;    /* Medium Blue */
}
```

Want to change the look? Visit [ColorHunt](https://colorhunt.co/) for inspiration!

### Interface Modifications

Edit `Step3-Design-Your-Webpage.html` to customize:
- Layout and styling
- Control button placement
- Slider behavior
- Video feed size

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit changes (`git commit -m 'Add AmazingFeature'`)
4. Push to branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 🙏 Acknowledgments

- Thanks to all contributors who helped shape this project
- Inspired by various ESP32-CAM projects in the community
- 3D printing community for chassis design inputs

## 📸 Gallery

<div align="center">

![Pan-and-Tilt Frame](https://github.com/user-attachments/assets/8a52a6bc-8206-45c3-af31-00d7fe6aa050)

*Pan-Tilt mechanism in action*

</div>
