/*
   Project: Get Button Time  - Library
   
   Author: Eng. Renato Augusto
      
   Github: https://github.com/renatoaugustii/get_button_time
   Atribuição-NãoComercial -  Sujeito a punições legais
   
   **  VERSION CONTROLLER **
   Version: 1.0 - By Renato Augusto
   Date: Belo Horizonte - MG / Brasil 
   
   Any Question send me a email:
   renato.augusto.correa@outlook.com
   
*/

#include "Arduino.h"
#include "Get_Button_Time.h"

get_b::get_b(int pin)
{
   pinMode(pin, INPUT);
   _pin = pin;
  }

long get_b::get_time()  
{
     bool botao_on = digitalRead(_pin);
     if (botao_on == true)
     {
          if (_btn_flag == false)
          { _tempo_inicial = millis();_btn_flag = true;_button_pressed = true;}
		  return 0;	
      }

      else
      {     
        if (_button_pressed == true)
           {
                 _btn_flag = false;
                 _button_pressed = false;
				     Button_time = (millis()-_tempo_inicial);
                 return Button_time;
             }
	         
		 return Button_time;	 
        }	
  }

int get_b::get_clicked_times(int timer_reset)
{  
     
     bool botao_on_click = digitalRead(_pin);
     if (botao_on_click == true)
     {
          if (_btn_flag_click == false)
          { _btn_flag_click = true;_last_state = true;cont = cont+1;}
		  return cont;	
      }

      else
         if (_last_state == true)
           {
                 _btn_flag_click = false;
                 _last_state = false;
                 _end_click_time = millis();
           }
      
      if ((millis()-_end_click_time)>=timer_reset){cont = 0;}

      return cont;
}
