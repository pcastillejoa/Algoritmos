#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int probabilidad_a (void)
{
	
	float a;
	
    srand(time(NULL));
    
    a = rand() / RAND_MAX;

    
    if (0 < a < 0.2)
    a=0;
     
    else if (0.2 < a < 1)
    a=1;
    
    else
    a=0;
    
    return a;
    
}    
