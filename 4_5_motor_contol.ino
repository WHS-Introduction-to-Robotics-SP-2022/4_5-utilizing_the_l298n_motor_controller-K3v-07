int a=5;
int b=6;
int c=7; 
int d=8;
int e=9;
int f=10;

void setup() {
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    
   
    
   
}

void loop() {
    analogWrite(a, 200);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    
    analogWrite(f, 200);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    
   
}

