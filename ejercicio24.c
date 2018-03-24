#include <stdio.h>
#include <stdlib.h>

#define ERROR_MSJ "Error:"
#define DIA_INVALIDO "Ingrese un dia entre 1-366" 

int main()
{

    int dia;
    
    printf("Ingrese numero del dia del año\n");
    scanf("%d", &dia);
    
		
    if ((dia-1)%7==0)
    printf ("El dia es domingo\n");
    
    else if ((dia-2)%7==0)
    printf ("El dia es lunes\n");
    
    else if ((dia-3)%7==0)
    printf ("El dia es martes\n");
    
    else if ((dia-4)%7==0)
    printf ("El dia es miercoles\n");
    
    else if ((dia-5)%7==0)
    printf ("El dia es jueves\n");
    
    else if ((dia-6)%7==0)
    printf ("El dia es viernes\n");
    
    else 
    printf ("El dia es sabado\n");

if (dia<=1||dia>=366)
	fprintf(stderr, "%s : %s\n" , ERROR_MSJ , DIA_INVALIDO);
	return EXIT_FAILURE;
	
}
    
	
	
	
	
	


