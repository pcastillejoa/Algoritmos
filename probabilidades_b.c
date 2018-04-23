#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "probabilidades_b.h"

  int num_randb (void)
{
    float proba;
    int result=0;
	
    srand(time(NULL));
    
    proba = (float)rand() / RAND_MAX;
    
     if (0 < proba && proba < 0.1)
       result=3;
     
     else if (0.1 < proba && proba < 0.55)
       result=5;
  
     else if (0.55 < proba && proba < 1)
       result=9;
    
     return result; 
}    

int main (void)
{
   int final;
   
   final = num_randb();
   
   printf ("%d\n", final);
  
   return 0;
}
