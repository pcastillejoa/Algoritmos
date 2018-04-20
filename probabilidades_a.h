#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num_rand (void)
{
	float a;
	int result;
	
    srand(time(NULL));
    
    a = (float)rand() / RAND_MAX;
    
    if (0 < a && a < 0.2)
     result=0;
     
    else if (0.2 < a && a < 1)
      result=1;
 
    else 
      result=0; 
    
    return result;
    
}     
