# Student-Portfolio-for-COSC-111

## Table of Contents

1. [Laboratory Activity 1](#laboratory-activity-1)  
2. [Laboratory Activity 2](#laboratory-activity-2)  
3. [Laboratory Activity 3](#laboratory-activity-3)  
4. [Laboratory Activity 4](#laboratory-activity-4)  
5. [Laboratory Activity 5](#laboratory-activity-5)  
6. [Laboratory Activity 6](#laboratory-activity-6)  
7. [Laboratory Activity 7](#laboratory-activity-7)  
8. [Midterm Laboratory](#midterm-laboratory)

---

## Laboratory Activity 1

**Folder:** `Activity-1`  
**Description:** Sequentially turns on and off 5 LEDs connected to pins 8–12. Each LED turns on for 1 second and then off for 1 second.  
**Key Files:** `Activity1.ino`  
**Instructions:**  
1. Connect 5 LEDs to Arduino pins 8–12 with resistors.  
2. Upload the Arduino sketch.  
3. Observe LEDs turning on and off sequentially.

---

## Laboratory Activity 2

**Folder:** `Activity-2`  
**Description:** Demonstrates smooth LED brightness control using PWM. Each LED gradually brightens and dims.  
**Key Files:** `Activity2.ino`  
**Instructions:**  
1. Connect 5 LEDs to PWM-capable pins (8–12).  
2. Upload the sketch.  
3. Observe gradual brightness changes on each LED.

---

## Laboratory Activity 3

**Folder:** `Activity-3`  
**Description:** Monitors temperature (LM35) and light intensity (LDR). If temperature ≥50°C and brightness ≥220, triggers a LED + buzzer alarm.  
**Key Files:** `Activity3.ino`  
**Instructions:**  
1. Connect LM35 to A0, LDR to A2, and LED+Buzzer to pin 12.  
2. Upload the sketch.  
3. Open Serial Monitor to view sensor readings.  
4. Test fire detection by simulating high temperature and brightness.

---

## Laboratory Activity 4

**Folder:** `Activity-4`  
**Description:** Monitors brightness from a sensor. When a threshold is exceeded, an LED blinks until the user types "stop" in the Serial Monitor.  
**Key Files:** `Activity4.ino`  
**Instructions:**  
1. Connect sensor to A0 and LED to pin 8.  
2. Upload sketch and open Serial Monitor.  
3. Observe blinking LED when brightness ≥220.  
4. Type "stop" to halt blinking.

---

## Laboratory Activity 5

**Folder:** `Laboratory-Activity-5`  
**Description:** Controls Red, Green, Blue LEDs using Arduino and Python. Offers a serial-based menu to toggle individual LEDs or all LEDs.  
**Key Files:**  
- `Lab5.ino` – Arduino sketch for LED control  
- `led_controller.py` – Python script to interface with Arduino  
**Instructions:**  
1. Connect LEDs to pins 8, 9, 10.  
2. Upload Arduino sketch.  
3. Run Python script and follow menu options to toggle LEDs.

---

## Laboratory Activity 6

**Folder:** `Lab-Activity-6`  
**Description:** Controls LEDs using buttons and Serial commands. Button presses or serial input toggles individual LEDs.  
**Key Files:** `Lab6.ino`  
**Instructions:**  
1. Connect LEDs to pins 5–7 and buttons to pins 10–12.  
2. Upload Arduino sketch.  
3. Press buttons or send serial commands to toggle LEDs.

---

## Laboratory Activity 7

**Folder:** `Laboratory-Activity-7`  
**Description:** Controls LEDs via buttons, Serial commands, and a FastAPI REST API. Users can toggle individual LEDs or turn all on/off remotely.  
**Key Files:**  
- `Lab7.ino` – Arduino sketch handling serial and button input  
- `lab7_api.py` – Python FastAPI server for remote control  
**Instructions:**  
1. Connect LEDs to pins 5–7 and buttons to pins 10–12.  
2. Upload Arduino sketch.  
3. Run Python FastAPI server: `python lab7_api.py`  
4. Access API endpoints:  
   - `/led/red`, `/led/green`, `/led/blue` – toggle LEDs  
   - `/led/on`, `/led/off` – turn all LEDs on/off

---

## Midterm Laboratory

**Folder:** `Midterm Laboratory`  
**Description:** *(Add a short description of the Midterm Lab activity here)*  
**Key Files:** *(List key files in this folder)*  
**Instructions:** *(Explain how to run or test the midterm lab)*

---

- **Henry Luis Pula** – GitHub: [onepiecefranky123](https://github.com/onepiecefranky123)  
