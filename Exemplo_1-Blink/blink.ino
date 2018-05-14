// O setup roda uma vez após iniciar a placa

void setup() {
  // inicializa o pino D7 como output
  pinMode(D7, OUTPUT);
}

 
// A função de loop fica rodando após o setup
void loop() {
  digitalWrite(D7, HIGH);   
  delay(1000);             
  digitalWrite(D7, LOW);  
  delay(1000);            
}
