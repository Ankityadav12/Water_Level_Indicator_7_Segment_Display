//  Water Level Indicator using Arduio and Seven Segment Display  by

//  SNNY Hack & Sci

//   Copy this whole page/code and paste it on Arduino IDE on your PC





int level1=A7;
int level2=A6;
int level3=A5;
int level4=A4;
int level5=A3;
int level6=A2;
int level7=A1; //defining to which pin of Arduino the level sensor are connected

int leda=8;
int ledb=7;
int ledc=6;
int ledd=5;
int lede=4;
int ledf=3;
int ledg=2; // defining to which pin of Arduino, the pins of Seven segment display are connected_ example_ pin 'a' of Seven segment display is connected to pin D8 of Arduino, which can be changed if required.




int a;
int b;
int c;
int d;
int e;
int f; 
int g;
int z=150; // If circuit is not displaying correct digit then adjust this value from 100 to 1023 . 
  

void setup(){

  pinMode(level1,INPUT);
  pinMode(level2,INPUT);
  pinMode(level3,INPUT);
  pinMode(level4,INPUT);
  pinMode(level5,INPUT);
  pinMode(level6,INPUT);
  pinMode(level7,INPUT);  // defining input pins


   pinMode( leda, OUTPUT);
   pinMode( ledb, OUTPUT);
   pinMode( ledc, OUTPUT);
   pinMode( ledd, OUTPUT);
   pinMode( lede, OUTPUT);
   pinMode( ledf, OUTPUT);
   pinMode( ledg, OUTPUT);  // defining output pins
  
}

void loop(){

  a=analogRead(level1);
  b=analogRead(level2);
  c=analogRead(level3);
  d=analogRead(level4);
  e=analogRead(level5);
  f=analogRead(level6);
  g=analogRead(level7);

if(g>z && f>z && e>z && d>z && c>z && b>z && a>z )


  
   {
        
        digitalWrite( leda, HIGH);
        digitalWrite( ledb, HIGH);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, LOW);  // to print 7

        delay( 8000 );

        digitalWrite( leda, LOW);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, LOW);  // to blank the display

        delay( 1000 );

        digitalWrite( leda, HIGH);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, HIGH);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, HIGH);  // to print F

        delay( 1200 );

        digitalWrite( leda, LOW);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, LOW);  //  to blank the display

        
        delay( 400 );

        digitalWrite( leda, LOW);
        digitalWrite( ledb, HIGH);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, HIGH);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, LOW); // to print U

        delay( 1200 );
        
        digitalWrite( leda, LOW);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, LOW);  //  to blank the display

        
        delay( 400 );

        digitalWrite( leda, LOW);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, HIGH);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, LOW); // to print L

        delay( 1200);

        digitalWrite( leda, LOW);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, LOW);  // to display blank

        delay( 400 );
        
        digitalWrite( leda, LOW);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, HIGH);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, LOW); // to print L

        delay( 2000 );

        digitalWrite( leda, LOW);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, LOW);  // to display blank

        delay( 800 );

  
      
        }   
else
  {
  if(g<z && f>z && e>z && d>z && c>z && b>z && a>z )
  {
        digitalWrite( leda, HIGH);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, HIGH);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, HIGH);  // to print 6
  
        }  
        else
  {
  if(g<z && f<z && e>z && d>z && c>z && b>z && a>z )
  {
        digitalWrite( leda, HIGH);
        digitalWrite( ledb, LOW);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, HIGH);  // to print 5
  
        }  
        else
  {
  if(g<z && f<z && e<z && d>z && c>z && b>z && a>z )
  {
        digitalWrite( leda, LOW);
        digitalWrite( ledb, HIGH);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, HIGH);  // to print 4
  
        }  
        else
  {
  if(g<z && f<z && e<z && d<z && c>z && b>z && a>z )
  {
        digitalWrite( leda, HIGH);
        digitalWrite( ledb, HIGH);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, HIGH);  // to print 3
  
        }  
        else
  {
  if(g<z && f<z && e<z && d<z && c<z && b>z && a>z )
  {
        digitalWrite( leda, HIGH);
        digitalWrite( ledb, HIGH);
        digitalWrite( ledc, LOW);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, HIGH);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, HIGH);  // to print 2
  
        
        }  
        else
  {
  if(g<z && f<z && e<z && d<z && c<z && b<z && a>z )
  {
        digitalWrite( leda, LOW);
        digitalWrite( ledb, HIGH);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, LOW);
        digitalWrite( lede, LOW);
        digitalWrite( ledf, LOW);
        digitalWrite( ledg, LOW);  // to print 1
  
        
        }  
        else
  {
  if(g<z && f<z && e<z && d<z && c<z && b<z && a<z )
  {
        digitalWrite( leda, HIGH);
        digitalWrite( ledb, HIGH);
        digitalWrite( ledc, HIGH);
        digitalWrite( ledd, HIGH);
        digitalWrite( lede, HIGH);
        digitalWrite( ledf, HIGH);
        digitalWrite( ledg, LOW);  // to print 0

        delay( 100 );


       

        
  
        
        }  
        
}
  
}



   

        
  }  }}  }}}
