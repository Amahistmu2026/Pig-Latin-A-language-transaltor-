/*C program by Abdullah MMohammad Mahi for CS 1310

 o            o
  \          /
   \        /
    :-'""'-:
 .-'  ____  `-.
( (  (_()_)  ) )
 `-.   ^^   .-'
    `._==_.'
    __)(___
*this program uses arrays and pointers to translate word to Pig Latin
*In Pig Latin, each word is altered by the front consonants (any letters not
*a/A , e/E i/I, o/O, u/U) being moved to the end and followed by "ay", and   
*words that startwith vowels or all consonants have "way" added to the end  
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


void translate(char *piglatin) /*function to translate english to piglatin*/  
{
	int i=0;               /* count (starts from position 0*/  
	int pos;               /* store the position of the vowel traced*/
	int end;               /*store the last position of the word*/
	
	end= strlen(piglatin); /* the length of any word that's inside piglatin*/ 
	
	/* until a vowel or find first vowel*/
	while (piglatin[i]!='e' && piglatin[i]!= 'a' && piglatin[i]!= 'i' && piglatin[i]!= 'o' 
	&& piglatin[i]!= 'u' && piglatin[i]!= 'A' && piglatin[i]!= 'E' 
	&& piglatin[i]!= 'I' && piglatin[i]!= 'O' && piglatin[i]!= 'U' && piglatin[i] != '\0')
		{   
		  i=i+1;                 /*going through each letter*/
		} 
	
	/*while loop get the vowel in first character or can't trace any vowel*/
	if (i==0 || i == end)              
	  {printf(" %s", piglatin);
	   printf("way ");}
	
	else                   /* printing a word with a vowel inside the word*/
	   {    
	    
		for(pos=i; pos < end; pos++) /* printing characters from 1st vowel traced position to end */
		{
		    printf("%c", piglatin[pos]);
		}
		for(pos=0; pos < i; pos++)   /* printing characters from first character up to 1st vowel traced position*/
		{
  			printf("%c", piglatin[pos]);      
		}
		printf("ay ");	
    	}	
}



void main (void)  
{
  char english[80];        /*holding user input string*/
  char *psentence;         /*point to each word */
 
  printf("--------------------------Welcome to the PIG LATIN PROGRAM.--------------------------");
  printf("\n\n Hi! User. We are glad to see you again");
  printf("\n\n Let me show all the instructions from USER GUIDE");
  printf("\n 1. This program translates sentence into Pig Latin." 
         "\n 2. In Pig Latin, each word is altered by the front consonants" 
		 "\n 3. Any letters not (a/A , e/E i/I, o/O, u/U) will move to the"
		 " end and followed by \"ay\" " "\n 4. Words that start with vowel "
		 "\n 4. All consonants have \"way\" added at the end."
		 "\n 5. Print a sentence at a time. Don't use any punctuation."  
		 "\n 6. Type 'Stop' to turn off this program");
		                                            
  printf("\n\n Type a sentence to translate (until 'stop') : "); 
  gets(english);
  printf(" Your sentence into Pig Latin :");
  
  do{ /* for each given sentence*/
   	  psentence = strtok(english, " ");   /*get word up to " " */
   	  	 
	  while( psentence != NULL )          /* for each word*/
	  	{
		 translate(psentence);
		 psentence= strtok(NULL, " = ");    /* looks for the next word*/
      	}
      
      printf("\n Type a sentence to translate : "); 
      
      /* it will stop loop while user types stop or Stop or STOP*/
      gets(english); 
	  printf(" Your sentence into Pig Latin :");
	  }while (strcmp(english,"stop")!=0 
	          && strcmp(english,"Stop")!=0
			  && strcmp(english,"STOP")!=0 );
 
    printf("\n\n\n anksThay orfay isitingvay  ourway ogramPray. ishWay otay eesay ouyay  againway!");
	printf("\nThanks for visitng our Program. Wish to see you again! (in pig Latin)"); 
    
	printf("                                                                 ");
    printf("\n                                                               ");
      printf("\n                            .-''''-.                          ");
  printf(    "\n                           /       \                           ");
  printf(   "\n                            \       /                           ");
  printf(   "\n                          .-'''-.-`.-.-.<  _                   ");
  printf(   "\n                    /   .  _,-\ ()()_/:)                       ");
  printf( "\n                         .  \     / ,  `   `|                   ");
  printf(  "\n                        '-..-| \-.,___,  /                     ");
  printf(  "\n                              \ `-.__/  /                      ");
 printf(   "\n                               `-.__.-'`                       ");                
printf( "\n                                                               ");

                      
                      
                      
                      
                      
                      
                      
                      
                      
                      
                      
                                
 
}

