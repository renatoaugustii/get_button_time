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
