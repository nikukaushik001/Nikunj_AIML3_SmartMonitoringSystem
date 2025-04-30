# Nikunj_AIML3_SmartMonitoringSystem
Smart Health Monitoring System for Early Detection of HMPV Symptoms - Developed using ESP32, Arduino, and Sensors.
# 🏥 Smart Health Monitoring System for HMPV Symptoms Detection

---

## 👥 Team Members:
- Nikunj (2301730188)
- Garvit Sharma (2301730190)
- Rishabh Garg(2301730189)
- Ayush Kumar (2301730013)

---

## 📌 Project Description:

The **Smart Health Monitoring System for HMPV Symptoms Detection** is designed to detect early symptoms of Human Metapneumovirus (HMPV), a virus affecting the respiratory system especially in children, elderly, and immunocompromised individuals.

This system monitors critical health parameters like:

- 🌡️ Body Temperature and Humidity (via DHT11 Sensor)  
- 🫀 Heart Rate and Blood Oxygen Level (via MAX30100 Sensor — simulated)  
- 🎤 Cough Sound Detection (via KY-038 Sound Sensor — simulated)

🔔 If any parameter crosses dangerous thresholds, a buzzer alert is triggered to warn the user.

All readings are displayed on the **Serial Monitor** for easy real-time monitoring.  
Fake/simulated values were used for demonstration due to hardware limitations.

---

## 🎥 Video Explanation:
👉 [Click here to watch the project demonstration](https://1drv.ms/v/c/0b7df465fa9f536e/EdXlwqsf0Z1NlDeuQrnURJUBnG7pYasbiAadN4MFt9ROMQ?e=W0lrcl)
## 📌 Project Report 
https://drive.google.com/file/d/1v78HfYFmA-x42nO8XJd5lfDRkd3S0cD6/view?usp=drive_link
## 📌 Project Presentation
https://docs.google.com/presentation/d/10VMuA6defwkJ1tAMm3QBBTJhzGh9ysyb/edit?usp=drive_link&ouid=100526307239521411987&rtpof=true&sd=true 
---

## 💻 Technologies Used:

- 🔹 **Programming Language:** Embedded C++ (Arduino IDE)
- 🔹 **Microcontroller:** ESP32  
- 🔹 **Sensors Used:**  
  - DHT11 (Temperature & Humidity)
  - MAX30100 (Pulse Oximeter - Heart Rate & SpO2 simulation)
  - KY-038 (Sound Sensor simulation)
  - Passive Buzzer (for alerts)
- 🔹 **Libraries:**
  - Wire.h
  - DHT.h
  - MAX30100lib

---

## 🚀 Steps to Run / Execute the Project:

1. Connect all sensors and buzzer to ESP32 according to the schematic.
2. Open Arduino IDE → Select ESP32 Dev Board → Select correct COM Port.
3. Upload the `.ino` file provided in this repository.
4. Open **Serial Monitor** (baud rate: 115200) to view real-time data.
5. Observe buzzer activation when abnormal values are detected.

---

## 🖼️ Project Preview:

- 📈 Live temperature and humidity monitoring.
- ❤️ Simulated heart rate and SpO2 readings.
- 🎤 Sound detection for cough simulation.
- 🔔 Buzzer alert system on abnormal health signals.

---

# ⚡ Notes:
- In future, the system can be upgraded to **Blynk IoT app** or **cloud monitoring** for remote health tracking.
- Real medical-grade sensors can be integrated for more accurate measurements.

---

✅ “Empowering early health diagnosis with IoT innovation!”

---
