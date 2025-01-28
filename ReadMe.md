Air Quality Monitoring Device

Overview

This project involves building an Air Quality Monitoring System to measure and monitor air quality in real-time. Using the MQ-135 gas sensor and the NodeMCU ESP8266 microcontroller, the device provides data on the concentration of harmful gases, ensuring a healthier living or working environment. The project integrates IoT technology and the Blynk platform for remote monitoring.

Features
	•	Real-time air quality monitoring
	•	Detection of various harmful gases, including CO2, ammonia, benzene, alcohol, and smoke
	•	Local data display using an LCD
	•	Remote monitoring through the Blynk app
	•	Cost-effective and scalable design

Components
	•	NodeMCU (ESP8266): Microcontroller with built-in Wi-Fi capabilities.
	•	MQ-135 Sensor: Detects harmful gases and provides analog output.
	•	LCD Display: Displays air quality data locally.
	•	Blynk Application: Provides a user interface for monitoring data remotely.

Circuit Diagram

The circuit is based on the NodeMCU microcontroller and integrates the MQ-135 sensor, LCD display, and other sensors. For detailed connections, refer to the provided circuit diagram.

Working Principle
	1.	The MQ-135 sensor detects target gases and changes its electrical conductivity accordingly.
	2.	The NodeMCU reads the analog output from the sensor and converts it to a digital format.
	3.	The Blynk platform enables remote monitoring of the data.
	4.	The LCD displays the data locally for immediate viewing.

Applications
	•	Indoor air quality monitoring
	•	Gas leakage detection in industrial or household settings
	•	Environmental monitoring for outdoor air pollution levels
	•	Safety systems for hazardous gas detection

Results

The system provides reliable and accurate real-time data on air quality. Users can view the information locally or remotely via the Blynk app.

Usage Instructions
	1.	Hardware Setup: Connect the components as shown in the circuit diagram.
	2.	Software Setup:
	•	Flash the code (main.ino) to the NodeMCU.
	•	Configure the Blynk app to link with your NodeMCU.
	3.	Power On: Power the system through the USB connection or an external source.
	4.	Monitor:
	•	Use the LCD display for real-time local readings.
	•	Open the Blynk app for remote monitoring.

Conclusion

This Air Quality Monitoring Device is a cost-effective and user-friendly solution for ensuring a healthier environment. It can be scaled and adapted for various applications, from residential air quality checks to industrial safety monitoring.
