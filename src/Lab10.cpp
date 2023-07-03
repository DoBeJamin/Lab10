/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab10/src/Lab10.ino"
void setup();
void loop();
#line 1 "c:/Users/benja/OneDrive/Desktop/visualStudioCode/summerIOT/Lab10/src/Lab10.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

char message;
bool button_state;

void setup() {
  Serial.begin(9600);  
  Serial1.begin(9600);
}

void loop() {
  if (Serial.available()) {
    message = Serial.read(); 
    //Serial.println(message);
    Serial1.print( message);  

  if (Serial1.available()) {
    button_state = Serial1.read();

    if (button_state){
      Serial.println("Button state is HIGH");
    } else{
      Serial.println("Button state is LOW");
    }
  }
    

  }
}



