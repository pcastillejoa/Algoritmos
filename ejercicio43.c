
#include <stdio.h>
#include <stdlib.h>

#define INVALIDO "Comience de nuevo." 
#define KMREC "Ingrese los kilometros recorridos (-1 para finalizar)."
#define PREC "Ingrese el precio del combustible por litro."
#define COMP "Ingrese el monto total utilizado en este compra."
#define ELREND "El rendimiento es (l/100km)"
#define REND "Rendimiento promedio (l/100km):"
#define MEJOR "Mejor rendimiento (l/100km):"
#define PEOR "Peor rendimiento (l/100km):"
#define DIST "Distancia total recorrida (km):"
#define COMB "Combustible total consumido (l):"
#define COSTO "Costo total de su vehiculo ($):"

int main (void)
{

	float rendimiento=0.0, kmrecorridos=0.0, precio=0.0, compra=0.0;
	float litros=0, distancia=0, promedio=0, menor=10000, mayor=0.0, combustible=0, costo=0, suma=0;
	int rend=0, numero=0;
  
	while (kmrecorridos!=-1){
	
	printf ("%s\n", KMREC);
	scanf ("%f",&kmrecorridos); 
	
	if (kmrecorridos==-1) {break;} 
	
	printf ("%s\n", PREC);
	scanf ("%f",&precio);
	
	printf ("%s\n", COMP);
	scanf ("%f",&compra);
	
	litros = compra/precio;
	rendimiento = (100*litros)/kmrecorridos;
	printf ("%s : %.2f\n", ELREND, rendimiento);
	
	rend += rendimiento;
	
    if (rendimiento>mayor)
    {mayor=rendimiento;}
    
    if (rendimiento<menor)
    {menor=rendimiento;}

    distancia += kmrecorridos;
    combustible += (compra/precio);
    costo += compra;
    numero++;
    suma += rendimiento;
    }
    promedio = suma/numero;
 
    printf ("%s %.2f\n", REND, promedio);
	
	printf ("%s %.2f\n", MEJOR, menor);
	
	printf ("%s %.2f\n", PEOR, mayor);
	
	printf ("%s %.2f\n", DIST, distancia);
	
	printf ("%s %.2f\n", COMB, combustible);
	
	printf ("%s %.2f\n", COSTO, costo);
    
	return 0;
}
	
