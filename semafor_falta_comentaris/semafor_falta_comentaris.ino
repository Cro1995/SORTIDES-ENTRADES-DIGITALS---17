/****************************************************************
 **                                                            **
 **                    Sortides entrades digitals              **                                                           
 **                    Programa 2.1                            **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 13/03/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int AR = 7;   //definim el pin de les variables
int AT = 8;   
int AV = 9;
int BR = 10;
int BT = 11;
int BV = 12;



     



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  
     // configuració dels pins de sortida 
  pinMode(AR, OUTPUT);   // Definim les variables com sortides
  pinMode(AT, OUTPUT);   // Definim les variables com sortides
  pinMode(AV, OUTPUT);   // Definim les variables com sortides
  pinMode(BR, OUTPUT);   // Definim les variables com sortides
  pinMode(BT, OUTPUT);   // Definim les variables com sortides
  pinMode(BV, OUTPUT);   // Definim les variables com sortides

  
    digitalWrite(AR, HIGH);   // s'encendra el semafor A en vermell
    digitalWrite(AT, LOW);
    digitalWrite(AV, LOW);
    digitalWrite(BR, HIGH);   // s'encen el semafor B en vermell
    digitalWrite(BT, LOW);
    digitalWrite(BV, LOW);

      
    delay(500);         S'espera 0.5 s
    
}





//*************************** LOOP ******************************

void loop()         // inicia el bucle del programa 
{

    // funcionament sobre els leds següents 


  digitalWrite(BR, LOW);     // para el semafor B pasa del vermell a verd
  digitalWrite(BV, HIGH);    
  
  delay(4*500);              // s'espera els segons asignats 
  
  digitalWrite(BV, LOW);     // en aquest pas pasa el semafor B del verd a taronja 
  digitalWrite(BT, HIGH);    
  
  delay(500);                  // s'espera els segons asignats    
  
  digitalWrite(BT, LOW);     // en aquest pas pasa el semafor B del taronja a vermell 
  digitalWrite(BR, HIGH);    
   
  delay(500);                     // s'espera els segons asignats 
  
  digitalWrite(AR, LOW);     // en aquest pas pasa el semafor A del vermell a verd 
  digitalWrite(AV, HIGH);    
  
  delay(4*500);                   // s'espera els segons asignats 
  
  digitalWrite(AV, LOW);      // en aquest pas pasa el semafor A del verd a taronja 
  digitalWrite(AT, HIGH);    
  
  delay(500);                     // s'espera els segons asignats 
  
  digitalWrite(AT, LOW);        // en aquest pas pasa el semafor A del Taronja a vermell 
  digitalWrite(AR, HIGH);   

  delay(500);                    // s'espera els segons asignats 
}

                      



//************************* FUNCIONS ****************************
   // En aquest programa podem veure com ens mostra una seqüencia de dos semafors.  
   
