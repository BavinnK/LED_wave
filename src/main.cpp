#include <Arduino.h>
const int LEDs [6]={13,12,11,10,9,8};
void setup(){
pinMode(LEDs[6],OUTPUT);


}
void loop(){
for (int i = 0; i < 6; i++)
{
  digitalWrite(LEDs[i],HIGH);
  delay(500);
  digitalWrite(LEDs[i],LOW);

}
for (int i = 6; i > 0; i--)
{
  digitalWrite(LEDs[i],HIGH);
  delay(500);
  digitalWrite(LEDs[i],LOW);
  
}
for (int i = 0; i < 6; i++)
{
  digitalWrite(LEDs[i],HIGH);
}
delay(2000);
for (int i = 0; i < 6; i++)
{
  digitalWrite(LEDs[i],LOW);
}
delay(300);
}