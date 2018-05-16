#include "LiquidCrystal.h"// include the library code
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() {
Serial.begin(9600);
lcd.begin(16, 2); // set up the LCD's number of columns and rows:
//lcd.print("05050821 Kuo"); // Print a message to the LCD.
}
void loop() {
// (note: line 1 is the second row, since counting begins with 0):
String s = "";
if(Serial.available())
{
 char c = Serial.read();
if(c!='\n'){
s += c;
delay(5);
}
Serial.print(s);
lcd.print(s);
}
}

