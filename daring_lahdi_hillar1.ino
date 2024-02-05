const int green1 = 11;
const int green2 = 3;
const int red1 = 10;
const int red2 = 9;
const int red3 = 6;
const int red4 = 5;
const int switch2 = 7;
const int switch1 = 12;
int reading1=0;
int reading2=0;
int i = 0;

void setup()
{
  for(int x=11;x>=3;x--){
    pinMode(x, OUTPUT);
    }
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
  
}

void loop()
{
  reading1=digitalRead(switch1);
  reading2=digitalRead(switch2);
  i++;
  switch(i){
    case 1 : 
    if(reading1==HIGH ){
    analogWrite(red1,255);
    analogWrite(green1,50);
  }
  else{
      digitalWrite(red1,LOW);
      digitalWrite(green1,LOW);
     }
  break;
  case 2 :
    if(reading2==HIGH ){
    analogWrite(red4,255);
    analogWrite(green2,50);
  }
  else{
      digitalWrite(red4,LOW);
      digitalWrite(green2,LOW);
  }
    
  break;
     
  }

  }