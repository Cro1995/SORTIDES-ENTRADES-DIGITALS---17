/****************************************************************
 **                                                            **
 **                    Sortides entrades digitals              **                                                           
 **                    Programa 1.1                            **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 06/03/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************

int ledVermell1 = 5;
int ledVermell2 = 6;
int ledVermell3 = 7;
int ledVermell4 = 8;
int ledVermell5 = 9;
int ledVermell6 = 10;
int ledVermell7 = 11;
int ledVermell8 = 12;
int polsador = 2;
     



 //************************* SETUP ******************************

void setup()                // configura el final de la sortida  
{
  
     // configuració dels pins de sortida 
  pinMode(ledVermell1, OUTPUT);    
  pinMode(ledVermell2, OUTPUT);
  pinMode(ledVermell3, OUTPUT);
  pinMode(ledVermell4, OUTPUT);
  pinMode(ledVermell5, OUTPUT);
  pinMode(ledVermell6, OUTPUT);
  pinMode(ledVermell7, OUTPUT);
  pinMode(ledVermell8, OUTPUT); 
    
}





//*************************** LOOP ******************************

void loop()         // inicia el bucle del programa 
{

    // funcionament sobre els leds següents 
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, HIGH);      
    digitalWrite(ledVermell8, HIGH);
   
    delay(1000);

    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(1000);


}

                      



//************************* FUNCIONS ****************************
   // En aquest programa podem veure com ens mostra que si supera un valor faci un operació o si no supera el valor no faci res.  
   
