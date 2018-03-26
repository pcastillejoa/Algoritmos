#include <stdio.h>
#include <stdlib.h>

#define ERROR_MSJ "Error"
#define DIA_INVALIDO "Ingrese un dia entre 1-366" 
#define DOM "El dia es domingo."
#define LU "El dia es lunes."
#define MA "El dia es martes."
#define MIE "El dia es miercoles."
#define JUE "El dia es jueves."
#define VIE "El dia es viernes."
#define SAB "El dia es sabado."

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
        printf("%s\n", DOM);
            break;
            
        case 1: 
        printf("%s\n", LU);
            break;
            
        case 2: 
        printf("%s\n", MA);
            break;
            
        case 3: 
        printf("%s\n", MIE);
            break;
            
        case 4: 
        printf("%s\n", JUE);
            break;
            
        case 5: 
        printf("%s\n", VIE);
            break;
            
        case 6: 
        printf("%s\n", SAB);
            break;
                   
    }
}
return 0;
}
	

	
	
	
	


