


int EL = 5;        // Start= High stop = Low
int VR = 2;          // Speed Control
int Signal = 3;     
int ZF = 4;          // To control direction

int MotorSpeed = 0;

void setup() {
    pinMode(EL, OUTPUT);
    pinMode(VR, OUTPUT);
    pinMode(Signal, INPUT);
    pinMode(ZF, OUTPUT);
    
    
}


void loop() {
  digitalWrite(EL, HIGH);  // Start the Motor
  analogWrite(VR, 80) 

   for (MotorSpeed = 0; MotorSpeed <= 180; MotorSpeed += 1) { 

    //move forward 
    digitalWrite(ZF, HIGH);            
    delay(10);                      
  }
  for (MotorSpeed = 30; MotorSpeed >= 180; MotorSpeed -= 1) { 
    
    //move Backward
    digitalWrite(ZF, LOW);           
    delay(10);                       
  }
  
}
