#define segA 2//connecting segment A to PIN2

#define segB 3// connecting segment B to PIN3

#define segC 4// connecting segment C to PIN4

#define segD 5// connecting segment D to PIN5

#define segE 6// connecting segment E to PIN6

#define segF 7// connecting segment F to PIN7

#define segG 8// connecting segment G to PIN8

int COUNT=0;//count integer for 0-9 increment

int  buzzer = 5; //buzzer på arduino pin 1

int frq = 1000;//lydfrekvens for buzzern

int del = 3000;

int del2 = 1000;

int del3 = 500;

int x = 1;

const int input = 13;//inputPin

const int rdbil = 8;//Rødt lys for bilen

const int gulbil = 9;//gult lys for bilen

const int grnbil = 10;//grønt lys for bilen

const int grn = 7;

const int rd = 6;

int knapp = 0;


void setup()
{
  
    for(int i=1;i<10;i++)
    {
     pinMode(i, OUTPUT);// taking all pins from 1-10 as output
	}
  
  	pinMode(input, INPUT); 
  
}

void beep()
	{  
  	noTone(buzzer);     // Stop sound...
  	delay(del3);
	tone(buzzer,frq); // Send 1KHz sound signal... 
    delay(del3);        // ...for 1 sec  
  	noTone(buzzer);
	}

void grnnmann()
	{
    digitalWrite(grnbil, LOW);
	digitalWrite(gulbil, LOW);
	digitalWrite(rdbil, HIGH);
	digitalWrite(grn, HIGH);
	digitalWrite(rd, LOW);
	}

void rdmann()
	{
	digitalWrite(rd, HIGH);
	digitalWrite(grn, LOW); 
  	while(2>1)
    	{
    	digitalWrite(rdbil, HIGH);
    	delay(del);
    	digitalWrite(gulbil, HIGH);
    	delay(del2);
    	digitalWrite(rdbil, LOW);
    	digitalWrite(gulbil, LOW);
    	digitalWrite(grnbil, HIGH);
    	delay(del);
    	digitalWrite(grnbil, LOW);
    	digitalWrite(gulbil, HIGH);
    	delay(del2);
    	digitalWrite(gulbil, LOW);
      	break;
  		}
	}

void loop()
{ 
	knapp = digitalRead(input);

  	if (knapp == LOW)
    {
     	switch (COUNT)
        		{
             	case 0://when count value is zero show”0” on disp

             	digitalWrite(1, LOW);//enerplass

             	digitalWrite(2, LOW);//toerplass

             	digitalWrite(3, LOW);//firerplass

             	digitalWrite(4, LOW);//åtterplass
                    
             	break;
            	 }
                  
			rdmann();
      		
    }
  
  
  	else if (knapp == HIGH)
    {
    	int COUNT=10;
    	for (int x = 0; x < COUNT; x=x)
        {
          
    	grnnmann();
          
    	beep();
          
		COUNT--;
    
		switch (COUNT)
        		{

                case 0://when count value is zero show”0” on disp
      
                digitalWrite(1, LOW);//enerplass

                digitalWrite(2, LOW);//toerplass

                digitalWrite(3, LOW);//firerplass

                digitalWrite(4, LOW);//åtterplass



                break;

                case 1:// when count value is 1 show”1” on disp
   
                digitalWrite(1, HIGH);//enerplass

                digitalWrite(2, LOW);//toerplass

                digitalWrite(3, LOW);//firerplass

                digitalWrite(4, LOW);//åtterplass


                   
                break;

                case 2:// when count value is 2 show”2” on disp
      
                digitalWrite(1, LOW);//enerplass

                digitalWrite(2, HIGH);//toerplass

                digitalWrite(3, LOW);//firerplass

                digitalWrite(4, LOW);//åtterplass

                break;
  

                case 3:// when count value is 3 show”3” on disp
      
                digitalWrite(1, HIGH);//enerplass

                digitalWrite(2, HIGH);//toerplass

                digitalWrite(3, LOW);//firerplass

                digitalWrite(4, LOW);//åtterplass

  
                break;

                case 4:// when count value is 4 show”4” on disp
      
                digitalWrite(1, LOW);//enerplass

                digitalWrite(2, LOW);//toerplass

                digitalWrite(3, HIGH);//firerplass

                digitalWrite(4, LOW);//åtterplass 

                    
				
                break;

                case 5:// when count value is 5 show”5” on disp
      
                digitalWrite(1, HIGH);//enerplass

                digitalWrite(2, LOW);//toerplass

                digitalWrite(3, HIGH);//firerplass

                digitalWrite(4, LOW);//åtterplass


               

                break;

                case 6:// when count value is 6 show”6” on disp
      
                digitalWrite(1, LOW);//enerplass

                digitalWrite(2, HIGH);//toerplass

                digitalWrite(3, HIGH);//firerplass

                digitalWrite(4, LOW);//åtterplass

                                

                break;

                case 7:// when count value is 7 show”7” on disp
      
                digitalWrite(1, HIGH);//enerplass

                digitalWrite(2, HIGH);//toerplass

                digitalWrite(3, HIGH);//firerplass

                digitalWrite(4, LOW);//åtterplass


                   

                break;

                case 8:// when count value is 8 show”8” on disp
      
                digitalWrite(1, LOW);//enerplass

                digitalWrite(2, LOW);//toerplass

                digitalWrite(3, LOW);//firerplass

                digitalWrite(4, HIGH);//åtterplass

                
                

                break;

                case 9:// when count value is 9 show”9” on disp
      
                digitalWrite(1, HIGH);//enerplass

                digitalWrite(2, LOW);//toerplass

                digitalWrite(3, LOW);//firerplass

                digitalWrite(4, HIGH);//åtterplass

				
                break;

                break;

               }
    	}
  }
}