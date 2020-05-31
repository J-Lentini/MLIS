String Input = "";         // a string to hold incoming data
boolean Complete = false;  // whether the string is complete
String Command = "";
boolean Connection = false;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);

  while (!Serial) {
     ; // wait for serial port to connect. Needed for native USB port only
   }

   
  // initialize digital pin 13 as an output.
  //pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(53, OUTPUT);
 }

// the loop function runs over and over again forever
 void loop() {


   
  if(Complete)
{
  Complete = false;
  getCommand();
  
 
  if(Command.equals("STOP"))
  {
    digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(53, LOW);
  digitalWrite(23, LOW);
  digitalWrite(28, LOW);
  digitalWrite(29, LOW);
  digitalWrite(30, LOW);
  digitalWrite(31, LOW);
  digitalWrite(32, LOW);
  digitalWrite(33, LOW);
  digitalWrite(48, LOW);
  digitalWrite(49, LOW);
  digitalWrite(50, LOW);
  digitalWrite(51, LOW);
  digitalWrite(46, LOW);    
  }

 else if(Command.equals("ENDS"))
  {
    digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(53, LOW);
  digitalWrite(23, LOW);
  digitalWrite(28, LOW);
  digitalWrite(29, LOW);
  digitalWrite(30, LOW);
  digitalWrite(31, LOW);
  digitalWrite(32, LOW);
  digitalWrite(33, LOW);
  digitalWrite(48, LOW);
  digitalWrite(49, LOW);
  digitalWrite(50, LOW);
  digitalWrite(51, LOW);
  digitalWrite(46, LOW);    
  }
  
  
  else if(Command.equals("01on"))
  {
    digitalWrite(12, HIGH);
  }
  
  else if(Command.equals("02on"))
  {
    digitalWrite(11, HIGH);
  }
  else if(Command.equals("03on"))
  {
    digitalWrite(10, HIGH);
  }
  else if(Command.equals("04on"))
  {
    digitalWrite(9, HIGH);
  }
  else if(Command.equals("05on"))
  {
    digitalWrite(8, HIGH);
  }
  else if(Command.equals("06on"))
  {
    digitalWrite(7, HIGH);
  }
  else if(Command.equals("07on"))
  {
    digitalWrite(6, HIGH);
  }
    else if(Command.equals("08on"))
  {
    digitalWrite(5, HIGH);
  }
   else if(Command.equals("09on"))
  {
    digitalWrite(4, HIGH);
  }
  else if(Command.equals("10on"))
  {
    digitalWrite(3, HIGH);
  }
  else if(Command.equals("11on"))
  {
    digitalWrite(2, HIGH);
  }
  else if(Command.equals("12on"))
  {
    digitalWrite(53, HIGH);
  }
  else if(Command.equals("13on"))
  {
    digitalWrite(23, HIGH);
  }
  else if(Command.equals("14on"))
  {
    digitalWrite(28, HIGH);
  }
    else if(Command.equals("15on"))
  {
    digitalWrite(29, HIGH);
  }
   else if(Command.equals("16on"))
  {
    digitalWrite(30, HIGH);
  }
  else if(Command.equals("17on"))
  {
    digitalWrite(31, HIGH);
  }
  else if(Command.equals("18on"))
  {
    digitalWrite(32, HIGH);
  }
  else if(Command.equals("19on"))
  {
    digitalWrite(33, HIGH);
  }
  else if(Command.equals("20on"))
  {
    digitalWrite(48, HIGH);
  }
  else if(Command.equals("21on"))
  {
    digitalWrite(49, HIGH);
  }
  else if(Command.equals("22on"))
  {
    digitalWrite(50, HIGH);
  }
  else if(Command.equals("23on"))
  {
    digitalWrite(51, HIGH);
  }
  else if(Command.equals("24on"))
  {
    digitalWrite(46, HIGH);
  }
  Input = "";
}
}

void getCommand()
{
  if(Input.length()>0)
  {
     Command = Input.substring(1,5);
  }
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    Input += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      Complete = true;
    }
  }
}
