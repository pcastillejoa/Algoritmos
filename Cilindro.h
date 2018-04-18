#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

double cilindro_diametro (float RAD) 
{
	return RAD*2;
}

double cilindro_circunferencia (float RAD)
 {  
    return pi*RAD*2;
}
    
double cilindro_base (float RAD)
{
    return pi*RAD*RAD;
}
    
double cilindro_volumen (float RAD, float ALT)
{
    return pi*RAD*RAD*ALT;
    
 }       
