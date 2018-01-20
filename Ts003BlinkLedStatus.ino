/*
  Blink met Led_status Bool variabele.
*/
#define FALSE  0
#define TRUE   1


// Declareer geheugen voor een variabele
// De bool is een echte digitale variabele en kan alleen TRUE (1) of FALSE (0) aannemen.
bool Led_Status = FALSE; // Declareer Led_Status en initialiseer die gelijk op FALSE
// Een opdracht in 'C' wordt afgesloten met een puntcomma ';'


// Reserveer geheugen voor een variabele en geef het een naam.
byte byteTeller = 0; // maak de varuiabele aan en zet de waarde op nul.
// Een byte is 8 bit lang en kan daardoor 256 waarden aannemen (2^8) van 0 tot 255.


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(LED_BUILTIN, !Led_Status);   // turn the LED on (HIGH is the voltage level)  
  if (byteTeller < 5 )
  {
    delay(200);                       // wait for a second
  }
  else
  {
    delay(50);                       // wait for a second
  }
  byteTeller = byteTeller + 1;
    
  if(byteTeller == 15)
    byteTeller = 0;
  Led_Status = !Led_Status; 
}
