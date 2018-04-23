#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "probabilidades_d.h"

  int num_rand_d (void)
{
	float proba;
	
    srand(time(NULL));
        
    proba = (float)rand() / RAND_MAX;
    
    return proba;
    
}    


   int main (void)
{
   
   int dado;
   
     dado = num_rand_d();
   
     if (dado == (1/6)){
       printf("|    *|\n");
       printf("|     |\n"); 
       printf("|*    |\n");
       }
       
     else if (dado == (1/3)){
       printf("|    *|\n");
       printf("|     |\n"); 
       printf("|*    |\n");
       }
     
     else if (dado == (1/2)){
       printf("|*    |\n");
       printf("|  *  |\n"); 
       printf("|    *|\n");
       }
       
     else if (dado == (2/3)){
       printf("|*   *|\n");
       printf("|     |\n"); 
       printf("|*   *|\n");
	   }
	   
     else if (dado == (5/6)){
       printf("|*   *|\n");
       printf("|  *  |\n"); 
       printf("|*   *|\n");
       }
       
     else if (dado == 1){
       printf("|*   *|/n");
       printf("|*   *|/n"); 
       printf("|*   *|/n");  
       }

  
   return 0;

}

