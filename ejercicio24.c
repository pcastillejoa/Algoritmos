#include <stdio.h>
#include <stdlib.h>

#define ERROR_MSJ "Error:"
#define DIA_INVALIDO "Ingrese un dia entre 1-366" 

int main(void)
{

    int dia; 
    int modulo;
  
    printf("Ingrese numero del dia del año\n");
    scanf("%d",&dia);
          
	 if (dia<1||dia>=366)
	fprintf(stderr, "%s : %s\n" , ERROR_MSJ , DIA_INVALIDO);
	else if (dia>=1 || dia<366){
    
        modulo=(dia-1)%7;
 
    switch (modulo)
    {
        case 0:
        printf("Domingo\n");
            break;
            
        case 1: 
        printf("Lunes\n");
            break;
            
        case 2: 
        printf("Martes\n");
            break;
            
        case 3: 
        printf("Miercoles\n");
            break;
            
        case 4: 
        printf("Jueves\n");
            break;
            
        case 5: 
        printf("Viernes\n");
            break;
            
        case 6: 
        printf("Sabado\n");
            break;
                    
        default:
        printf("Eror! Ingrese un numero valido.\n");
    }
}
return EXIT_FAILURE;
}
	
	
	
	


