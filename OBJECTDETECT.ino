void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
    pinMode(A0,INPUT);
      pinMode(A0,INPUT);
  
  

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



void loop() {
 int Right = analogRead(A0);
 int Left = analogRead(A1);

 //Serial.print("Value of Right Sesnor : "+ String(Right));
  //Serial.print("\t");
  //Serial.print("Value of Left Sesnor : "+ String(Left));

  //delay(1000); 
  
  if((Right > 700) && (Left>700)){
   moveRobot("S");
   delay(1000);
   
     moveRobot("B");
   delay(1000);

     moveRobot("L");
   delay(2000);
   
   
   
      
  }

  if((Right < 700) && (Left > 700)){
   moveRobot("S");
   delay(1000);
   
     moveRobot("B");
   delay(1000);

     moveRobot("R");
   delay(2000);
   
   
   
    }

if((Right > 700) && (Left < 700)){
   moveRobot("S");
   delay(1000);
   
     moveRobot("B");
   delay(1000);

     moveRobot("L");
   delay(2000);
   
   
   
    }

    if((Right < 700) && (Left < 700)){
   moveRobot("F");
   delay(1000);
   
   
   
   
    }


}   
  
