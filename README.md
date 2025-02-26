# DeauthEye
A tool that detects deauthentication attacks on WiFi using BW16.

# Key Features
- Minimal Setup.
- It detects deauthentication attacks on 2.4GHz and 5GHz both.

# Hardware Requirements
- Ai-Thinker BW16 RTL8720DN Development Board

# Note
- It has two variants : Type-B and Type-C connectors.

# Setup
1. Download Arduino IDE from [here](https://www.arduino.cc/en/software) according to your Operating System.
2. Install it.
3. Go to `File` → `Preferences` → `Additional Boards Manager URLs`.
4. Paste the following link :
   
   ```
   https://github.com/ambiot/ambd_arduino/raw/master/Arduino_package/package_realtek_amebad_index.json
   ```
5. Click on `OK`.
6. Go to `Tools` → `Board` → `Board Manager`.
7. Wait for sometimes and search `Realtek Ameba Boards (32-Bits ARM Cortex-M33@200MHz)` by `Realtek`.
8. Simply install it.
9. Restart the Arduino IDE by closing and open again.
10. Done!

# Install
1. Download or Clone the Repository.
2. Open the folder and just double click on `DeauthEye.ino` file.
   - It opens in Arduino IDE.
3. Replace `YOUR_SSID` and `YOUR_PASSWORD` with your wifi and its password respectively.
4. Compile the code.
5. Select the correct board from the `Tools` → `Board` → `AmebaD ARM (32-bits) Boards`.
   - It is `Ai-Thinker BW16 (RTL8720DN)`.
6. Select the correct port number of that board.
7. Go to `Tools` → `Board` → `Auto Flash Mode` and select `Enable`.
8. Upload the code.
   - Wait for sometime, the `GREEN` led turns ON.

# Indicators
- 🟢 - The BW16 board connected successfully to that wifi.
- 🔴 - The BW16 board get disconnected from that wifi.
