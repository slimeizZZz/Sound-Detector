int digital= 4;
int latch=13;
int button=7;
int led=A4;

#include <LiquidCrystal.h> 

LiquidCrystal lcd(2,3,8,9,10,11);

void setup() {

  Serial.begin(9600);

  lcd.begin(16,2);
  pinMode(digital,INPUT);
  pinMode(latch, OUTPUT);
  pinMode(button,INPUT);
  pinMode(led,INPUT);
  digitalWrite(latch, LOW);
}

void loop() {
   
   float val= (5*(analogRead(led))/1024);
   Serial.println(val);
  delay(200); 
 
  if(digitalRead(digital) == HIGH){
    digitalWrite(latch, HIGH);
    delay(50);
    digitalWrite(latch, LOW);
  }

    if(val==1){
    lcd.setCursor(0,0);
    lcd.print("WARNING!  ");

    lcd.setCursor(0,1);              
    lcd.print("Press red button");
  } 
    
  else{
    lcd.setCursor(0,0);
    lcd.print("No sound       ");

    lcd.setCursor(0,1);
    lcd.print("detected!       ");
  }
   
   
}
