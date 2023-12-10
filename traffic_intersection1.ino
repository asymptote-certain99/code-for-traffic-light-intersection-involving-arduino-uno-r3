void setup() {

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  int index;
  for (index = 0; index <= 8; index++) {
    pinMode(index, OUTPUT);
  }
  int index1;
  for (index1 = 10; index1 <= 13; index1++) {
    pinMode(index1, INPUT);
  
  }
   
}

void loop(){
// black wire connects to ground, yellow wire connects to numbered pins output, red connects to power, green connects to switch 
  

  int useful1 = 1; 
  if (analogRead(A2)!=0 && analogRead(A3)!=0 && useful1==1){ //if switch 1 & 2 is pressed
    useful1 = 0; //reset variable to 0
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(0, LOW);
    digitalWrite(8, HIGH);
    for (int a = 1; a <=6; a++){
      digitalWrite(2, HIGH);
      delay(500);
      digitalWrite(2, LOW);
      delay(500);
    }
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH);
    delay(2000);
    digitalWrite(1, LOW);
    digitalWrite(8, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    delay(6000);
    digitalWrite(9, LOW);
    for (int l = 1; l <=4; l++){
      digitalWrite(8, HIGH);
       delay(500);
      digitalWrite(8, LOW);
       delay(500);
    }
    digitalWrite(8, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH);
    delay(3000);
    digitalWrite(1, LOW);
    digitalWrite(0, HIGH);
    delay(3000);
  } else if (analogRead(A2)!=0 && useful1== 1){
      useful1 = 0;
      digitalWrite(6, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(0, LOW);
      digitalWrite(9, HIGH);
       delay(6000);
      digitalWrite(9, LOW);
      for (int b = 1; b <=4; b++){
        digitalWrite(8, HIGH);
         delay(500);
        digitalWrite(8, LOW);
         delay(500);
    }
    digitalWrite(8, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH);
     delay(3000);
    digitalWrite(1, LOW);
    digitalWrite(0, HIGH);
     delay(3000);
  
    
  }else if (analogRead(A3)!=0 && useful1 == 1)  {
    
    useful1= 0;
    digitalWrite(0, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    for (int c = 1; c <= 6;c++){
      digitalWrite(2, HIGH);
      delay(500);
      digitalWrite(2, LOW);
      delay(500);
    }
    digitalWrite(1, HIGH);
    delay(2000);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    delay(10000);
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH);
    delay(3000);
    digitalWrite(1, LOW);
    digitalWrite(0, HIGH);
    delay(3000);
  } else{ 
    useful1 = 0;
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(0, LOW); 
    digitalWrite(2, HIGH);
     delay(10000);
    digitalWrite(2, LOW);
    digitalWrite(1, HIGH);
     delay(3000);
    digitalWrite(1, LOW);
    digitalWrite(0, HIGH);
     delay(3000);
  } 
  int useful = 1;
  if (analogRead(A0)!=0 && analogRead(A1)!=0 && useful==1){
    useful = 0;
    digitalWrite(0, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    for (int d = 1; d <=6; d++){
      digitalWrite(5, HIGH);
       delay(500);
      digitalWrite(5, LOW);
       delay(500);
    }
    digitalWrite(4, HIGH);
      delay(2000);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
      delay(6000);
    digitalWrite(7, LOW);
    for (int e = 1; e <=4; e++){
      digitalWrite(6, HIGH);
       delay(500);
      digitalWrite(6, LOW);
       delay(500);
    }
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
     delay(3000);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
     delay(3000);
      
  }else if (analogRead(A0)!=0 && useful==1){
    digitalWrite(0, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(3, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(5, HIGH);
     delay(6000);
    digitalWrite(7, LOW);
    for (int f = 1; f <=4; f++){
      digitalWrite(6, HIGH);
       delay(500);
      digitalWrite(6, LOW);
       delay(500);
    }
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
     delay(3000);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
     delay(3000);
  }else if (analogRead(A1)!=0 && useful==1){
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(0, HIGH);
    digitalWrite(3, LOW);
    for (int g = 1; g <=6; g++){
      digitalWrite(5, HIGH);
       delay(500);
      digitalWrite(5, LOW);
       delay(500);
    }
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
     delay(2000);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
     delay(10000);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(3000);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(3000);
  }else{
    digitalWrite(0, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(5, HIGH);
     delay(10000);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
     delay(3000);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
     delay(3000);
  }
}
 