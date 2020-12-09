int led_pin=27;
int led_pin1=26;
int led_pin2=32;
int led_pin3=25;
const int value=60;
int touchsensorvalue;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(led_pin,OUTPUT);
pinMode(led_pin1,OUTPUT);
pinMode(led_pin2,OUTPUT);
pinMode(led_pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
touchsensorvalue = touchRead(T5);
Serial.print(touchsensorvalue);
if (touchsensorvalue<value)
{
digitalWrite(led_pin,HIGH);
delay(1000);
digitalWrite(led_pin,LOW);
delay(1000);
digitalWrite(led_pin1,HIGH);
delay(1000);
Serial.println(led_pin1);
digitalWrite(led_pin1,LOW);
delay(1000);
digitalWrite(led_pin2,HIGH);
delay(1000);
digitalWrite(led_pin2,LOW);
delay(1000);
digitalWrite(led_pin3,HIGH);
delay(1000);
digitalWrite(led_pin3,LOW);
delay(1000);
}else
{
digitalWrite(led_pin,HIGH);
delay(300);
digitalWrite(led_pin,LOW);
delay(300);
digitalWrite(led_pin1,HIGH);
delay(300);
Serial.println(led_pin1);
digitalWrite(led_pin1,LOW);
delay(300);
digitalWrite(led_pin2,HIGH);
delay(300);
digitalWrite(led_pin2,LOW);
delay(300);
digitalWrite(led_pin3,HIGH);
delay(300);
digitalWrite(led_pin3,LOW);
delay(300);
}
}
