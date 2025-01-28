#define BLYNK_PRINT Serial
#include <SPI.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#include <MQ135.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

#define BLYNK_TEMPLATE_ID "TMPL3meWbqpGq"
#define BLYNK_TEMPLATE_NAME "Internship"
#define BLYNK_AUTH_TOKEN "g2ARssbM7uQvDSIsxJFtPhLbwtAcFulW"
#define digital D0
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "iPhone";
char pass[] ="qwertyuiop";
int mq135= A0;
int AnalogData=0,DigitalData=0;
void setup() {
 
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  Serial.begin(9600);
  Serial.println("Initializing LCD...");
  lcd.begin(16, 2); 
  lcd.init();
  lcd.clear(); 
  lcd.backlight();       
  lcd.setCursor(3,0);
  lcd.print("Air Quality");
  lcd.setCursor(3,1);
  lcd.print("Monitoring");
  delay(2000);
  lcd.clear();
}

void loop() {

  AnalogData=analogRead(mq135);
  Serial.println(AnalogData);

  if(AnalogData<800)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("CO2 Value: ");
    lcd.print(AnalogData);
    lcd.setCursor(0, 1);
    lcd.print("Fresh Air");
    Serial.println("Fresh Air");
  }
  else if(AnalogData>800)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("CO2 Value: ");
    lcd.print(AnalogData);
    lcd.setCursor(0, 1);
    lcd.print("Bad Air");
    Serial.println("Bad Air");
  }

  Blynk.virtualWrite(V0,AnalogData);
 
  Blynk.run();

}
