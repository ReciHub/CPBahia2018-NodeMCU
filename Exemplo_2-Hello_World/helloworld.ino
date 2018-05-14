void setup() {

  // inicializa a comunicação serial
    Serial.begin(9600);

}

 
void loop() {

  // imprime 'Hello world' através do serial
    Serial.println("Hello world");

  // espera durante 1 segundo e imprime novamente
    delay(1000);
           
}
