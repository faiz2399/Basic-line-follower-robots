#define B1 4
#define B2 5
#define B3 6
#define B4 7





void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

  pinMode(B1,OUTPUT);
  
  pinMode(B2,OUTPUT);
  
  pinMode(B3,OUTPUT);
  
  pinMode(B4,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  

}




void moveRobot(String motion){

    if(motion =="F"){

    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);

    Serial.println("Forward");
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
//right a0
void loop() {

int Right = analogRead(A0);
int Left = analogRead(A1);

//Serial.print("Value of Right : "+String(Right));
//Serial.print("\t");
//Serial.print("Value of Right : "+String(Right));

//delay(1000);
  
  if((Right >700) && (Left > 700)){

      moveRobot("F");
      digitalWrite(4,HIGH);
       digitalWrite(5,LOW);
        digitalWrite(6,HIGH);
         digitalWrite(7,LOW);
  }

  if((Right <700) && (Left <700)){

      moveRobot("S");
      digitalWrite(4,LOW);
       digitalWrite(5,LOW);
        digitalWrite(6,LOW);
         digitalWrite(7,LOW);
  }

  if((Right < 700) && (Left > 700)){

      moveRobot("R");
      digitalWrite(4,LOW);
       digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);
         digitalWrite(7,LOW);
  }

  if((Right >700) && (Left <700)){

      moveRobot("L");
      digitalWrite(4,HIGH);
       digitalWrite(5,LOW);
        digitalWrite(6,LOW);
         digitalWrite(7,HIGH);
  }
  
  
  }
