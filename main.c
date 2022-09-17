int ledPin3=4;
int ledPin4=5;
int ledPin5=6;
int ledPin6=7;

int val1=0;
int val2=0;
int val3=0;
int val4=0;
int val5=0;
int val6=0;
int periodo=50;
unsigned long tiempoActual=0;

void setup() 
  {
    randomSeed(0);
    pinMode(ledPin1,OUTPUT);
    pinMode(ledPin2,OUTPUT);
    pinMode(ledPin3,OUTPUT);
    pinMode(ledPin4,OUTPUT);
    pinMode(ledPin5,OUTPUT);
    pinMode(ledPin6,OUTPUT);
    
  }

void loop() 
  {
    
   
    if(millis()>tiempoActual+periodo)
   {
     tiempoActual=millis();
     val1=random(100,255);
     analogWrite(ledPin1,val1);
     val2=random(100,255);
     analogWrite(ledPin2,val2);
     val3=random(100,255);
     analogWrite(ledPin3,val3);
     val4=random(100,255);
     analogWrite(ledPin4,val4);
     val5=random(100,255);
     analogWrite(ledPin5,val5);
     val6=random(100,255);
     analogWrite(ledPin6,val6);
  }
  }
