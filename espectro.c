#include <stdio.h>
#include <stdlib.h>

#define MSJ_ERR "Error"
#define MSJ_ERR_NUM1 "El número debe ser menor a 50000"
#define MSJ_ERR_NUM2 "El número debe ser mayor a 1700"



typedef enum {CLASE_O, CLASE_B, CLASE_A, CLASE_F, CLASE_G, CLASE_K, CLASE_M} espectral_t;


int main (void)
{

   int temp=1;
 
   espectral_t estrella;
 
     printf ("Ingrese la temperatura del cuerpo celeste.\n");
  
     scanf ("%d", &temp);
     
     if (temp>= 28000 && temp<= 50000)
       
       estrella = CLASE_O;
      
     else if (temp>= 9600 && temp< 28000)
       
       estrella = CLASE_B;
       
     else if (temp>= 7100 && temp< 9600)
       
       estrella = CLASE_A;
       
     else if (temp>= 5700 && temp< 7100)
       
       estrella = CLASE_F;
     
     else if (temp>= 4600 && temp< 5700)
     
       estrella = CLASE_G;
       
     else if (temp>= 3200 && temp< 4600)
       
       estrella = CLASE_K;
       
     else if (temp>= 1700 && temp< 3200)
       
       estrella = CLASE_M;   
       
     else if (temp > 50000) 
     {
     fprintf (stderr, "%s : %s.\n", MSJ_ERR, MSJ_ERR_NUM1); 
      return EXIT_FAILURE;
     } 
     
     else 
     {
     fprintf (stderr, "%s : %s.\n", MSJ_ERR, MSJ_ERR_NUM2); 
      return EXIT_FAILURE;
     }  
     

    switch (estrella) 
      {
       case CLASE_O: 
       
       
       printf ("Azul.\n");
       
       break;
       
       case CLASE_B: 
       
       printf ("Blanco azulado.\n");
       
       break;
       
       case CLASE_A: 
       
       printf ("Blanco.\n");
       
       break;
       
       case CLASE_F: 
       
       printf ("Blanco amarillento.\n");
       
       break;
       
      case CLASE_G: 
       
       printf ("Amarillo.\n");
       
       break;
       
       case CLASE_K: 
       
       printf ("Naranja.\n");
       
       break;
       
       case CLASE_M: 
       
       printf ("Rojo.\n");
       
       break;
       }
	
      
      return 0;
  }  
