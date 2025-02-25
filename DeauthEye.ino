/*
 * DeauthEye
 * A tool that detects deauthentication attacks on WiFi using BW16.
 * Author - WireBits
 */

#include <WiFi.h>

char ssid[] = "YOUR_SSID";
char pass[] = "YOUR_PASSWORD";
int wifiStatus;
bool wasConnected = false;

void setup(){
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);
  WiFi.begin(ssid, pass);
}

void loop(){
  wifiStatus = WiFi.status();
  if (wifiStatus == WL_CONNECTED){
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, HIGH);
    digitalWrite(LED_B, LOW);
    wasConnected = true;
  }
  else {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);

    if (wasConnected){ 
      WiFi.begin(ssid, pass);
    }
  }
  delay(1000);
}
