/*
   Project: Get Button Time  - Library
   
   Author: Eng. Renato Augusto
      
   Github: https://github.com/renatoaugustii/????
   Atribuição-NãoComercial -  Sujeito a punições legais
   
   **  VERSION CONTROLLER **
   Version: 1.0 - By Renato Augusto
   Date: Belo Horizonte - MG / Brasil 
   
   Any Question send me a email:
   renato.augusto.correa@outlook.com
   
*/

#ifndef get_button
#define get_button

#include "Arduino.h"
  class get_b 
  {
		public:
		  get_b(int pin);
		  long get_time(void);
		  
			private:
			  int _pin;
			  bool _btn_flag = false;
			  bool _button_pressed = false;
			  long _tempo_inicial = 0;
			  long Button_time = 0;
    };
#endif
