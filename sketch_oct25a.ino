
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 0;
int resultado=0;
char Str1[16];
void setup() {
  
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  
  lcd.begin(16, 2);
  lcd.print("Binario");
  lcd.setCursor(0, 1);
  lcd.print("Decimal");
  delay(1000);
  lcd.clear();
  
}

void loop() {
  
  if(digitalRead(10)==HIGH){
    
    Str1[contador]='0';
    lcd.setCursor(contador,0);
    lcd.print("0");
    resultado=resultado*2;
    lcd.setCursor(0,1);
    lcd.print(resultado);
    contador++;
    
  }
  if(digitalRead(9)==HIGH){
   
    Str1[contador]='1';
    lcd.setCursor(contador,0);
    lcd.print("1");
    resultado=(resultado*2)+1;
    lcd.setCursor(0,1);
    lcd.print(resultado);
    contador++;
    
  }
  if(digitalRead(8)==HIGH){
    
    lcd.clear();
    contador=0;
    resultado=0;
 
    lcd.setCursor(0, 0);   
    lcd.print("Binario");
    lcd.setCursor(0, 1);
    lcd.print("Decimal");
    delay(500);
    lcd.clear();
  
  }
  delay(125);
}
 
