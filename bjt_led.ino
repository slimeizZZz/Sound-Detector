//declararea pinilor ledului si al butonului
const int ledPin = 32;

//declararea datelor ajutatoare
unsigned long ultimulTimpBlink = 0; //pt cronometrare
const long interval = 1000;//interval de 1s

void setup() {
  Serial.begin(115200);//upload speed 115200
  pinMode(ledPin, INPUT);
  
}

void loop() {
  float val= (3.3/4095)*(analogRead(ledPin)); //citesc valorile analogice ale tensiunii de pe LED
  Serial.println(val);
  delay(200); //sa nu se trimita asa de multe puncte catre matlab
}