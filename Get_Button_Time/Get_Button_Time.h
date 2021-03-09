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
	          int get_clicked_times(int timer_reset); // Use miliseconds
		  
		private:
		  int _pin;
	          int _timer_reset = 0;
	  	  int cont = 0;
	  	  bool _last_state = false;
	          bool _btn_flag = false;
	          bool _btn_flag_click = false;
		  bool _button_pressed_click = false;
	          bool _button_pressed = false;
	          long _tempo_inicial = 0;
	          long _end_click_time = 0;
	          long Button_time = 0;
    };
#endif
