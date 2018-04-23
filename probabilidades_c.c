#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "probabilidades_c.h"

  char num_randc (void)
{
    float proba;	
    char result= '\0';
	
    srand(time(NULL));
     
    proba = (float)rand() / RAND_MAX;
       
     if (0 < proba && proba < 0.5)
       result= 'H';
     
     else if (0.5 < proba && proba < 1)
       result= 'T';
    
    return result;  
}    


int main (void)
{
   char final;
   
   final = num_randc();
   
   printf ("%c\n", final);
  
   return 0;

}
