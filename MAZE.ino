void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

    pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  

}




void moveRobot(String motion){

    if(motion =="F"){

    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);

    Serial.println("Forward");
    }

    if(motion =="B"){

    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);

    Serial.println("BACKWARD");
    }
        if(motion =="L"){

    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);

    Serial.println("LEFT");
    }
        if(motion =="R"){

    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);

    Serial.println("RIGHT");
    }
     if(motion =="S"){

    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);

    Serial.println("STOP");
    }
    
    

}

   void turnleft(){
    
    
    Serial.println("turnleft");

    int M_temp=1;
    while(M_temp != 0){
      
      
      moveRobot("L");
      delay(100);

        moveRobot("S");
      delay(100);

      M_temp = digitalRead(3);
      
      
      }
    }


       void turnright(){
    
    
    Serial.println("turnright");

    int L_temp=1;
    while(L_temp != 0){
      
      
      moveRobot("R");
      delay(100);

        moveRobot("S");
      delay(100);

      L_temp = digitalRead(2);
      
      
      }
    }

void loop() {

  int Le = digitalRead(2);
  int Me = digitalRead(3);
   int Re = digitalRead(4);

   if((Le==0 && Me==0 && Re==1)){


    turnleft();
   }

     if((Le==0 && Me==1 && Re==0)){


    turnleft();
   }

     if((Le==0 && Me==1 && Re==1)){


    turnleft();
   }

     if((Le==1 && Me==0 && Re==0)){

      moveRobot("F");
      delay(100);

       moveRobot("S");
      delay(100);
      


   }

    if((Le==1 && Me==0 && Re==1)){

      moveRobot("F");
      delay(100);

       moveRobot("S");
      delay(100);
  
    }
     if((Le==1 && Me==1 && Re==0)){

      moveRobot("F");
      delay(100);

       moveRobot("S");
      delay(100);
      turnright();
     }

     if((Le==1 && Me==1 && Re==1)){

      moveRobot("F");
      delay(100);

       moveRobot("S");
      delay(100);

      int L_temp = digitalRead(2);
      int M_temp = digitalRead(3);
      int R_temp = digitalRead(4);


       if((L_temp==1 && M_temp==1 && R_temp==1)){

       turnleft();
     }

       if((Le==0 && Me==0 && Re==0)){

      moveRobot("F");
      delay(200);

       moveRobot("S");
      delay(200);

      int L_temp = digitalRead(2);
      int M_temp = digitalRead(3);
      int R_temp = digitalRead(4);


       if((L_temp==0 && M_temp==0 && R_temp==0)){

       moveRobot("S");

       exit(0);
     }
      else{
        
        turnleft();
        }
      }
     }
}
  
  
