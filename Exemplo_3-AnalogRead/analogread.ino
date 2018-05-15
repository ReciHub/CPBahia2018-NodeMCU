void setup() {

  Serial.begin(9600);

}


void loop() {

  // lê a entrada no pino analógico A0
  int sensorValue = analogRead(A0);

  // imprime no serial o valor lido
  Serial.println(sensorValue);

  // tempo entre as leituras
  delay(1);
}
