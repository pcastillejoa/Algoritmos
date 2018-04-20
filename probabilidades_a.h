#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int probabilidad_a (void)
{
	
	float a;
	
    srand(time(NULL));
    
    a = (float)rand() / RAND_MAX;
    
    return a;
    
}     

    int main (void)
{
    float prob;
    int res;
    
    prob = probabilidad_a ();
    
    if (0 < prob < 0.2)
    res=0;
     
    else if (0.2 < prob < 1)
    res=1;
 
    else 
    res=0;
    
    printf ("%d\n", res);

    return 0;
}    
