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
  
  Example:

  get_b Name(#pin number); // "get_b" define what pin will be used to read time
  Name.get_time(); // "get_time" returns the time the button was pressed

  "get_time" returns the time in milliseconds
   
*/
#include <Get_Button_Time.h> //Declare library to use during program

get_b pino(6); // object using pin 6

void setup() {
    Serial.begin(9600); // Star Serial Communication
}

void loop() {
  
   long pressed_time = pino.get_time(); //get time the button was pressed
   Serial.println(pressed_time); //Print on display the value of time the button
    delay(50); // Delay cycle to print on Screen
}
