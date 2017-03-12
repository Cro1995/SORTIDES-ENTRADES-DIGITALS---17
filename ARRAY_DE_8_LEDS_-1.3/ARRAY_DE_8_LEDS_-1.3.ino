/****************************************************************
 **                                                            **
 **                    Sortides entrades digitals              **                                                           
 **                    Programa 1.3                            **                   
 **                                                            **
 **  Nom: Carlos Rubio Ortega               Data: 12/03/2017   **                                                           
 ***************************************************************/
 //************************ INCLUDE *****************************


 //*********************** VARIABLES ****************************


  // DEFINIM ELS LEDS AMB LES DIFERENTS ENTRADES DIGITALS.
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

    // funcionament sobre els leds següents que estaran tots apagats. 
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);
   
    delay(250);
     //  Aqui nomès tindrem el led vermell 1 ences els altres leds estaran parats. 
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
      //  Aqui nomès tindrem el led vermell 1 i 2 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 1,2 i 3  ences els altres leds estaran parats.
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 2,3 i 4 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 3, 4 i 5 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250); 
    //  Aqui nomès tindrem el led vermell 4, 5 i 6 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 5, 6 i 7 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, HIGH);      
    digitalWrite(ledVermell8, LOW);

    delay(250);

    //  Aqui nomès tindrem el led vermell 6, 7 i 8  ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, HIGH);      
    digitalWrite(ledVermell8, HIGH);

    delay(250);
    //  Aqui nomès tindrem el led vermell 7 i 8 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, HIGH);      
    digitalWrite(ledVermell8, HIGH);

    delay(250);
    //  Aqui nomès tindrem el led vermell 8 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, HIGH);

    delay(250);

    //  Aqui nomès tindrem tots els leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 8 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, HIGH);

    delay(250);
    //  Aqui nomès tindrem el led vermell 8 i 7 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, HIGH);      
    digitalWrite(ledVermell8, HIGH);

    delay(250);
    //  Aqui nomès tindrem el led vermell 8, 7 i 6 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, HIGH);      
    digitalWrite(ledVermell8, HIGH);

    delay(250);
    //  Aqui nomès tindrem el led vermell 7, 6 i 5 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, HIGH);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 6, 5 i 4 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, HIGH);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 5, 4 i 3 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, HIGH);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 4, 3 i 2 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, HIGH);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 3, 2 i 1 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, HIGH);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 2 i 1 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, HIGH);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem el led vermell 1 ences els altres leds estaran parats.
    digitalWrite(ledVermell1, HIGH);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
    //  Aqui nomès tindrem tots els leds estaran parats.
    digitalWrite(ledVermell1, LOW);
    digitalWrite(ledVermell2, LOW);
    digitalWrite(ledVermell3, LOW);
    digitalWrite(ledVermell4, LOW);
    digitalWrite(ledVermell5, LOW);
    digitalWrite(ledVermell6, LOW);
    digitalWrite(ledVermell7, LOW);      
    digitalWrite(ledVermell8, LOW);

    delay(250);
}

                      



//************************* FUNCIONS ****************************
   // En aquest programa podem veure com els leds ens fa la seqüencia de les llums del cotxe fantastic.  
   
