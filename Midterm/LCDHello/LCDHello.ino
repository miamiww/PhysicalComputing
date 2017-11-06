#include <LiquidCrystal.h>


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
 // lcd.autoscroll();
  // print the number of seconds since reset:
//  lcd.print(millis() / 1000);
    if(millis()/1000 % 2 == 0){
      lcd.print("give me a hi 5");
      delay(5);
    } else{
      lcd.print("too slow      ");
      delay(5);
    }

}
