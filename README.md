# ESP32-CAM-PAN-TILT-WIFI-CAM
![Project Image](https://github.com/user-attachments/assets/bea6ddab-9588-421c-a9cf-d1fd22205bcf)

ESP32-CAM module and servos to provide a pan-and-tilt control system via a web interface. The project combines camera streaming, Wi-Fi access point creation, and servo motor control, with functionality to store and recall servo positions using non-volatile memory.

## About

This project enables remote control of a pan-and-tilt camera system using an ESP32-CAM module. It allows users to control the camera's position and view the live video feed through a web interface. With this setup, you can monitor areas remotely and control the viewing angle of your camera easily.

## Items Used

- **ESP32-CAM**: The core component for camera functionality and Wi-Fi communication.
- **3D-Printed Chassis**: A custom-designed chassis to house the ESP32-CAM and servos, ensuring stability and proper alignment.
- **SG90 Servo Motors**: Two servo motors (SG90) for pan-and-tilt movements, providing precise control of the camera's orientation.
- **Jumper Wires**: Essential for connecting components and ensuring a clean setup.
- **FTDI Adapter**: Used for programming the ESP32-CAM module, facilitating easy uploading of code.
- **Pan-and-Tilt Frame**: A robust frame to mount the camera and servos, allowing for controlled movement and positioning.

![Pan-and-Tilt Frame](https://github.com/user-attachments/assets/8a52a6bc-8206-45c3-af31-00d7fe6aa050)

## Project Structure

The project consists of several steps, each represented by its own file:

1. **Step1-Check-Servos.ino**  
   This file initializes the servo motors and checks their basic functionality. It ensures that the servos respond correctly to input commands and are capable of moving to their designated positions.

2. **Step2-Testing-Local-Wifi-Connection.ino**  
   This file sets up and tests the local Wi-Fi connection to ensure the ESP32 can communicate with connected devices. It verifies the network connection and prepares the ESP32 for streaming and remote control.

3. **Step3-Design-Your-Webpage.html**  
   This HTML file contains the web interface for controlling the pan-and-tilt functionality of the camera. Customize the design as needed.  
   **Color Palette Used:**  
   - Background: `#001F3F` (Dark Blue)
   - Text Color: `#EAD8B1` (Light Beige)
   - Slider Background: `#6A9AB0` (Light Blue)
   - Slider Thumb: `#3A6D8C` (Medium Blue)
   - Button Background: `#6A9AB0` (Light Blue)
   - Button Hover: `#3A6D8C` (Medium Blue)

4. **Step4-Clear-OLDMemoryDATA.ino**  
   This file clears any old data stored in the Preferences library to ensure fresh data storage. It helps maintain the integrity of the data being used for servo positions.

5. **Step5-Lock-Servo-Position.ino**  
   This file allows users to lock the servo positions in place, preventing unwanted movements during operation. It provides stability during use, particularly when the camera needs to remain focused on a specific area.

6. **Step6-Create-Wifi-IP-ForCamera-Final.ino**  
   This final step sets up the complete system, establishing the camera's IP address and streaming the video feed to the web interface. It consolidates all previous setups into a functioning pan-and-tilt camera system.

## Getting Started

1. Assemble the hardware components according to the wiring diagram.
2. Upload the respective `.ino` files to the ESP32-CAM using the FTDI adapter.
3. Access the web interface using the IP address provided in the serial monitor after running the final step.

### Circuit Diagram
![Circuit Diagram](https://github.com/user-attachments/assets/5362c858-9ea5-4f86-ad9e-bd8231a87b27)

## Customization

You can customize the HTML web interface to fit your design preferences. Here are some suggestions for color adjustments to match your desired aesthetic:

- **Background Color**: Change to a different dark shade for a more dramatic look.
- **Text Color**: Use a brighter color for enhanced visibility against the background.
- **Button Colors**: Experiment with different hues to make the buttons stand out more.
![Screenshot 2024-10-22 001227](https://github.com/user-attachments/assets/c5e4f08d-9e66-4673-a4d7-bc2682f873b4)

Feel free to adjust the styles to fit your project’s theme!
and refer for color palette (https://colorhunt.co/)
the code is open source so feel free to modify! ✌️
