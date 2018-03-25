#include <stdio.h>
#include <stdlib.h>

#define ERROR_MSJ "Error"
#define DIA_INVALIDO "Ingrese un dia entre 1-366" 
#define DOM "domingo."
#define LU "lunes."
#define MA "martes."
#define MIE "miercoles."
#define JUE "jueves."
#define VIE "viernes."
#define SAB "sabado."

int main(void)
{

    int dia; 
    int modulo;
  
    printf("%s\n", DIA_INVALIDO);
    scanf("%d",&dia);
          
	 if (dia<1||dia>=366)
	fprintf(stderr, "%s : %s\n" , ERROR_MSJ , DIA_INVALIDO);
	else if (dia>=1 || dia<366){
    
        modulo=(dia-1)%7;
 
    switch (modulo)
    {
        case 0:
        printf("El dia es %s \n", DOM);
            break;
            
        case 1: 
        printf("El dia es %s \n", LU);
            break;
            
        case 2: 
        printf("El dia es %s \n", MA);
            break;
            
        case 3: 
        printf("El dia es %s \n", MIE);
            break;
            
        case 4: 
        printf("El dia es %s \n", JUE);
            break;
            
        case 5: 
        printf("El dia es %s \n", VIE);
            break;
            
        case 6: 
        printf("El dia es %s \n", SAB);
            break;
                    
        default:
        printf("Eror! Ingrese un numero valido.\n");
    }
}
return EXIT_FAILURE;
}
	

	
	
	
	


