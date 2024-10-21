/*
 * In the Arduino implementation of Preferences, there is no method of completely removing a namespace.
 * As a result, over the course of several projects, the ESP32 non-volatile storage (nvs) Preferences partition may become full.
 * So this code To completely erase and reformat the NVS memory used by Preferences. This code is only used once.
 * 
 * Description and code are from : https://randomnerdtutorials.com/esp32-save-data-permanently-preferences/
 */
 
#include <nvs_flash.h>

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Started deleting the NVS partition and initializing the NVS partition...");
  nvs_flash_erase();  // erase the NVS partition and...
  nvs_flash_init();   // initialize the NVS partition.
  Serial.println("Deleting the NVS partition and initializing the NVS partition is complete.");
}

void loop() {
  delay(1);
}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

