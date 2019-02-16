  int rosso;
  int verde;
  int bianco;
  int giallo;
  
  int  tempoRossoGiallo1= 0;
  int  tempoBiancoVerde1= 0;
 
  

  String input;

void setup() {
  rosso = 10;
  giallo = 8;
  bianco = 6;
  verde = 4;
  
  

  pinMode(rosso,OUTPUT);
  pinMode(giallo,OUTPUT);
  pinMode(bianco,OUTPUT);
  pinMode(verde,OUTPUT);
 
  Serial.begin(9600);
 
  Serial.println("Durata di spegnimento dei led rosso e giallo in ms?");
  while(Serial.available() == 0){}; 
  input=Serial.readString(); 
  tempoRossoGiallo1=input.toInt(); 
 
 Serial.println("Durata di spegnimento dei led bianco e verde in ms?");
  while(Serial.available() == 0){}; 
  input=Serial.readString(); 
  tempoBiancoVerde1=input.toInt();
                     
 
                                                         
}


void loop() 
{

        
 
tempoRossoGiallo(4);
tempoBiancoVerde(4);
  
}
void tempoRossoGiallo(int tempo1)
{
    for(int i=0; i < tempo1; i++)
{


  digitalWrite(rosso, HIGH);
  digitalWrite(giallo, HIGH);
  delay(tempoRossoGiallo1);
  digitalWrite(rosso, LOW);
  digitalWrite(giallo, LOW);
  }
}
void tempoBiancoVerde(int tempo2)

{
  for(int i=0; i < tempo2; i++)
  {


  digitalWrite(bianco, HIGH);
  digitalWrite(verde, HIGH);
  delay(tempoBiancoVerde1);
  digitalWrite(bianco, LOW);
  digitalWrite(verde, LOW);
  }
  }




  
