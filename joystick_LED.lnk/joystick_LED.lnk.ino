// il est à noté ici que nous connectons les broches URX, URY, et SW 
// aux pins A1, A2 et A3 respectivement

const int led1 =8;
const int led2 =9;
const int led3 =10;

int joyValue_x;          // valeurs en X, Y, et Z renvoyées par la joystick
int joyValue_y;
int joyValue_Z;

void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);

}

void loop() {

  joyValue_x = analogRead(A1);   // recupèrent les valeurs renvoyés par la joystick
  joyValue_y = analogRead(A2);   // sur les pin A1, A2, A3 
  joyValue_Z = analogRead(A3);


if(joyValue_Z  == 0)
{ 
  digitalWrite(led1, HIGH);
  delay(150);
  digitalWrite(led1, LOW);
  delay(150);
  digitalWrite(led2, HIGH);
  delay(150);
  digitalWrite(led2, LOW);
  delay(150);
  digitalWrite(led3, HIGH);
  delay(150);
  digitalWrite(led3, LOW);
  delay(150);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led1, HIGH);
  delay(150);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led1, LOW);
  delay(150);
  digitalWrite(led1, LOW);
  delay(150);
  digitalWrite(led2, HIGH);
  delay(150);
  digitalWrite(led2, LOW);
  delay(150);
  digitalWrite(led3, HIGH);
  delay(150);
  digitalWrite(led3, LOW);

  delay(150);
  delay(150);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led1, HIGH);
  delay(150);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led1, LOW);
  delay(150);

  delay(150);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led1, HIGH);
  delay(150);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led1, LOW);
  delay(150);
}
else
{
  if (joyValue_x > 600)
  digitalWrite(led3, HIGH);
  else
  digitalWrite(led3, LOW);
  if (joyValue_y < 400)
  digitalWrite(led2, HIGH);
  else
  digitalWrite(led2, LOW);
  if (joyValue_y > 600)
  digitalWrite(led1, HIGH);
  else
  digitalWrite(led1, LOW);
}
}
