#include "Arduino.h"
const int Pins[6] = {2, 3, 4, 5, 6, 7};
void setup()
{
  // initialize serial comms
  Serial.begin(115200);  
  for (int i = 0; i < 6; i++) {
    pinMode(Pins[i], OUTPUT);
  }
    char ch[16];
   ADC->ADC_ACR = ADC_ACR_IBCTL(0b01);                   // For frequencies > 500 KHz
}


  char ch[16];
int c=0, r=0;

void loop()
{



//      digitalWrite(2,LOW);
//      digitalWrite(3,LOW);
//      digitalWrite(4,LOW);
//      digitalWrite(5,LOW);
//      digitalWrite(6,LOW);
//      digitalWrite(7,LOW);
//      digitalWrite(2,bitRead(c, 2));
//      digitalWrite(3,bitRead(c, 1));
//      digitalWrite(4,bitRead(c, 0));
////    for (int r=0; r<5;r++){
//      digitalWrite(5,bitRead(r, 2));
//      digitalWrite(6,bitRead(r, 1));
//      digitalWrite(7,bitRead(r, 0));
 for (char r=0; r<5;r++){    
      digitalWrite(5,bitRead(r, 2));
      digitalWrite(6,bitRead(r, 1));
      digitalWrite(7,bitRead(r, 0));
 for (char c=0; c<5;c++){      
      digitalWrite(2,bitRead(c, 2));
      digitalWrite(3,bitRead(c, 1));
      digitalWrite(4,bitRead(c, 0));
      delay(2);
      if(r<=4 & c<=4){
      int a = analogRead(0);     sprintf(ch,"%4d%2d",1023-a,r*5+c);
      Serial.println(ch);
      }else{
        int a = 1023 ;     sprintf(ch,"%4d%2d",1023-a,r*5+c);
      Serial.println(ch);
        }
      delay(2);
      }
    
    
    }

 




 

  
  


}
