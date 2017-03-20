/****************************************************************
 **                                                            **
 **                    DISPLAY DE 7 SEGMENTS                   **                                                           
 **                    ENTRADES I SORTIDES DIGITALS            **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 20/03/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

const int segA = 2;   // definim les variables quin valor seran 
const int segB = 3;   // 
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;
int pausa = 1000;




 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{

  pinMode(segA, OUTPUT);    // Definim les variables com sortides
  pinMode(segB, OUTPUT);    // Definim les variables com sortides
  pinMode(segC, OUTPUT);    // Definim les variables com sortides
  pinMode(segD, OUTPUT);    // Definim les variables com sortides
  pinMode(segE, OUTPUT);    // Definim les variables com sortides
  pinMode(segF, OUTPUT);    // Definim les variables com sortides
  pinMode(segG, OUTPUT);    // Definim les variables com sortides

  digitalWrite(segA,HIGH);  // Numero 0
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,LOW);

  delay (pausa);
}




//*************************** LOOP ******************************

void loop()         // inicia el bucle del programa 
 {
  digitalWrite(segA, LOW);    // número 1         
  digitalWrite(segD, LOW);     
  digitalWrite(segE, LOW);     
  digitalWrite(segF, LOW);    // segments que queden encesos: B, C     
  
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);   // número 2          
  digitalWrite(segC, LOW);    // aquest segment quedara aturat 
  digitalWrite(segD, HIGH);     
  digitalWrite(segE, HIGH);     
  digitalWrite(segG, HIGH);   // segments que queden encesos: A, B, D, E i G   
    
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segC, HIGH);   // número 3          
  digitalWrite(segE, LOW);    // segments que quedaran encesos: A, B, C, D i G 
    
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 4    
  digitalWrite(segD, LOW);     
  digitalWrite(segF, HIGH);   // segments que quedaran encesos: B, C, F i G  
      
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);   // número 5 
  digitalWrite(segB, LOW); 
  digitalWrite(segD, HIGH);   // segments que queden encesos: A, C, D, F i G
        
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, LOW);    // número 6        
  digitalWrite(segE, HIGH);   // segments que queden encesos: C, D, E, F i G 
          
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segA, HIGH);   // número 7
  digitalWrite(segB, HIGH);  
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);    // segments que queden encesos: A, B i C
            
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segD, HIGH);   // número 8  
  digitalWrite(segE, HIGH); 
  digitalWrite(segF, HIGH);    
  digitalWrite(segG, HIGH);   // segments que queden encesos: A, B, C, D, E, F i G
              
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segD, LOW);    // número 9
  digitalWrite(segE, LOW);    // segments que queden encesos: A, B, C, F i G
                
  delay(pausa);               // es queda en aquest estat pausa ms
  
  digitalWrite(segD, HIGH);   // número 0    
  digitalWrite(segE, HIGH);    
  digitalWrite(segG, LOW);    // segments que queden encesos: A, B, C, D, E i F   

  delay(pausa);               // es queda en aquest estat pausa ms  
}
                      



//************************* FUNCIONS ****************************
   // En aquest programa podem veure com ens mostra amb els display tots els numeros del 0 al 9.  
   
