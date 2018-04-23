#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "probabilidades_a.h"

 int num_rand (void)
{
    float proba;	
    int result;
		
    srand(time(NULL));
        
    proba = (float)rand() / RAND_MAX;
        
     if (0 < proba && proba < 0.2)
       result=0;
     
     else if (0.2 < proba && proba < 1)
       result=1;
  
     else 
       result=0; 
    
    return result;    
}    

  int main (void)
{
   int final;
   
   final = num_rand();
   
   printf ("%d\n", final);
	  
   return 0;
}
