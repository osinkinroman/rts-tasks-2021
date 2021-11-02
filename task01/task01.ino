#define pin1 3
#define pin2 5
#define pin3 6
#define pin4 9
#define pin5 10
#define pin6 11

const long interval1 = 700000;
const long interval2 = 600000;
const long interval3= 10000;
const long interval4 = 400000;
const long interval5 = 250000;
const long interval6 = 100000;

unsigned long previousMicros1=0;
unsigned long previousMicros2=0;
unsigned long previousMicros3=0;
unsigned long previousMicros4=0;
unsigned long previousMicros5=0;
unsigned long previousMicros6=0;

int pin1State=LOW;
int pin2State=LOW;
int pin3State=LOW;
int pin4State=LOW;
int pin5State=LOW;
int pin6State=LOW;

void setup() {
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
pinMode(pin6,OUTPUT);
}

void loop() {
unsigned long currentMicros = micros();
if(currentMicros-previousMicros1>=interval1){
previousMicros1=currentMicros;
if(pin1State==LOW){
pin1State=HIGH;
}else{
pin1State=LOW;
}
digitalWrite(pin1,pin1State);
}
if(currentMicros-previousMicros2>=interval2){
previousMicros2=currentMicros;
if(pin2State==LOW){
pin2State=HIGH;
}else{
pin2State=LOW;
}
digitalWrite(pin2,pin2State);
}
if(currentMicros-previousMicros1>=interval3){
previousMicros3=currentMicros;
if(pin3State==LOW){
pin3State=HIGH;
}else{
pin3State=LOW;
}
digitalWrite(pin3,pin3State);
}
if(currentMicros-previousMicros4>=interval4){
previousMicros4=currentMicros;
if(pin4State==LOW){
pin4State=HIGH;
}else{
pin4State=LOW;
}
digitalWrite(pin4,pin4State);
}
if(currentMicros-previousMicros5>=interval5){
previousMicros5=currentMicros;
if(pin5State==LOW){
pin5State=HIGH;
}else{
pin5State=LOW;
}
digitalWrite(pin5,pin5State);
}
if(currentMicros-previousMicros6>=interval6){
previousMicros6=currentMicros;
if(pin6State==LOW){
pin6State=HIGH;
}else{
pin6State=LOW;
}
digitalWrite(pin6,pin6State);
}
}
