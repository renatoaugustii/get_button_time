/*
   Project: Get Button Time  - Example
   
   Author: Eng. Renato Augusto
      
   Github: https://github.com/renatoaugustii/get_button_time
   Attribution-Non-Commercial - Subject to legal penalties
   
   **  VERSION CONTROLLER **
   Version: 1.0 - By Renato Augusto
   Date: Belo Horizonte - MG / Brasil 
   
   Any Question send me a email:
   renato.augusto.correa@outlook.com
   FUNCTIONS:
   * get_b 
   * get_time
   * get_clicked_times
   
*/
#include <Get_Button_Time.h> //Declare library to use during program

get_b pino(6); // object using pin 6

void setup() {
    Serial.begin(9600); // Star Serial Communication
}

void loop() {
   long click_time = pino.get_clicked_times(3000); // Counts how many times the button was pressed, after the time that was selected in the function it returns the value to zero.
   Serial.println(click_time); //Print value of how many times it was pressed
   delay(50); // Delay cycle to print on Screen
}
