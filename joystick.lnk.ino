// il est à noté ici que nous connectons les broches URX, URY, et SW 
// aux pins A1, A2 et A3 respectivement

#include <Servo.h>
const int Pin_Servo1 = 8;
const int Pin_Servo2 = 9; // pin qui va commander le servo-moteur
Servo monservo1;          // objet qui permetre de manipuler le servo-moteur
Servo monservo2;

int init_pos1 = 0;        // position du servo en dégré
int init_pos2 = 0;
int joyValue_x;          // valeurs en X, Y, et Z renvoyées par la joystick
int joyValue_y;
int joyValue_Z;

void setup() {

  Serial.begin(9600);
  monservo1.attach( Pin_Servo1); //configure le servo à la pin digital 9
  monservo2.attach( Pin_Servo2);
}

void loop() {

  joyValue_x = analogRead(A1);   // recupèrent les valeurs renvoyés par la joystick
  joyValue_y = analogRead(A2);   // sur les pin A1, A2, A3 
  joyValue_Z = analogRead(A3);


if(joyValue_Z  == 0)
{ 
  for ( int i= 0 ; i<=179; i++ )
  { monservo1.write(i);
    monservo2.write(i);
    delay(6);
  }
  delay(50);
  for ( int i= 0 ; i<=179; i++ )
  { 
    monservo1.write(i);
    monservo2.write(i);
    delay(6);
  }
}
else
{
  init_pos1 = map(joyValue_x , 0, 1023, 0 , 179); // on encapsule dans init_pos la valeur de la joystick entre  les angles 0° et 179° 
  init_pos2 = map(joyValue_y , 0, 1023, 0 , 179);
  monservo1.write(init_pos1); // le servo tourne de init_pos dégré
  monservo2.write(init_pos2);
}

}
