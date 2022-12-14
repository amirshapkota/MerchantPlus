#include <ArduinoJson.h>

#include <SPI.h>
#include "Wire.h"
#include <RFID.h>
//#include<ArduinoJSON.h>
#define SS_PIN 10
#define RST_PIN 9
RFID rfid(SS_PIN, RST_PIN);

String rfidCard;

void setup() {
  Serial.begin(9600);
//  Serial.println("Starting the RFID Reader...");
//  Serial.println("Please Place your Card in the RFID Sensor.");
  SPI.begin();
  rfid.init();
}

void loop() {
  if (rfid.isCard()) {
    if (rfid.readCardSerial()) {
      rfidCard = String(rfid.serNum[0]) + "-" + String(rfid.serNum[1]) + "-" + String(rfid.serNum[2]) + "-" + String(rfid.serNum[3]);
//      Serial.println(rfidCard);
      DynamicJsonDocument doc(1024);
      doc["rfid-card-id"] = rfidCard;
      serializeJson(doc,Serial);
      delay(1000);
    }
    rfid.halt();
  }
}
