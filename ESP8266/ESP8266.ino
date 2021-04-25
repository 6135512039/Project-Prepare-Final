#include <TridentTD_LineNotify.h>
#define SSID "Tang_CoE 2.4GHz" 
#define PASSWORD "0810774499" 
#define LINE_TOKEN "RO1FXgttwB8xtSIAxiO2fJwvgajHWcNxmToSpnRXih2"
void setup() {
  Serial.begin(115200); Serial.println();
  Serial.println(LINE.getVersion());
  WiFi.begin(SSID, PASSWORD);
  Serial.printf("WiFi connecting to %s\n", SSID);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(400);
  }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());
  // กำหนด Line Token
  LINE.setToken(LINE_TOKEN);
  // ตัวอย่างส่งข้อความ
  LINE.notify("ทดสอบการส่งข้อความ ESP8266");
  LINE.notify("ผู้สูงอายุทานยาแล้ว");
  LINE.notify("ผู้สูงอายุยังไม่ทานยาแล้ว");
}
void loop() {
  delay(1);
}
