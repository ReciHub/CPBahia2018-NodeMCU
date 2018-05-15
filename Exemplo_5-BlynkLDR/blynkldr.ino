#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

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

  // Leitura do valor do LDR
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  // Valor do LDR enviado para o Blynk
  Blynk.virtualWrite(V1, sensorValue);

  Blynk.run();

}
