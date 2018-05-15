#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Auth Token obtido dentro do Blynk app

char auth[] = "YourAuthToken";

// WiFi para o node se conectar
char ssid[] = "YourNetworkName";
char pass[] = "YourPassword";

void setup()
{
  // Serial para debugar
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);  
}

void loop()
{
  Blynk.run();

}
