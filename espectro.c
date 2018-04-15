#include <stdio.h>
#include <stdlib.h>

#define MSJ_ERR "Error"
#define MSJ_ERR_NUM1 "El número debe ser menor a 50000"
#define MSJ_ERR_NUM2 "El número debe ser mayor a 1700"



typedef enum {azul, blanco_azulado, blanco, blanco_amarillento, amarillo,
	 naranja, rojo} espectral_t;


int main (void)
{

   int temp;
 
   espectral_t espectral;
   
   char O=1, B=1, A=1, F=1, G=1, K=1, M=1;
  
     printf ("Ingrese la temperatura del cuerpo celeste.\n");
  
     scanf ("%d", &temp);
  
    if (temp > 50000) 
     {
     fprintf (stderr, "%s : %s.\n", MSJ_ERR, MSJ_ERR_NUM1); 
      return EXIT_FAILURE;
     } 
     
     else if (temp <1700) 
     {
     fprintf (stderr, "%s : %s.\n", MSJ_ERR, MSJ_ERR_NUM2); 
      return EXIT_FAILURE;
     }
     
     else if (temp>= 28000 && temp<= 50000)
       temp = O;
      
     else if (temp>= 9600 && temp< 28000)
       temp = B; 
       
     else if (temp>= 7100 && temp< 9600)
       temp = A; 
       
     else if (temp>= 5700 && temp< 7100)
       temp = F;
     
     else if (temp>= 4600 && temp< 5700)
       temp = G;
       
     else if (temp>= 3200 && temp< 4600)
       temp = K;
       
     else if (temp>= 1700 && temp< 3200)
       temp = M;     
    
    switch (temp) 
      {
       case 'O': espectral = azul;
       break;
       
       case 'B' : espectral = blanco_azulado;
       break;
       
       case 'A': espectral = blanco;
       break;
       
       case 'F': espectral = blanco_amarillento;
       break;
       
       case 'G': espectral = amarillo;
       break;
       
       case 'K': espectral = naranja;
       break;
       
       case 'M': espectral = rojo;
       break;
       }
			   
      printf ("El color de la estrella es %d\n", espectral);
      
      return 0;
  }  
