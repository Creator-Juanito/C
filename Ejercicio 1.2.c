#include <stdio.h>
/* imprime la tabla en Fahrenheint-Celsius
para fahr= 0, 20,..., 300*/

main()
{
	int fahr,celsius;
	int lower,upper,step;
	
	lower=0; /*límite inferior de la tabla de temperaturas*/
	upper=300; /*límite superior*/
	step=20, /*tamaño del incremento*/
	
	fahr=lower;
	while(fahr<=upper){
		celsius=5*(fahr-32.0)/9;
		printf("%d\t %d\n",fahr,celsius);
		fahr=fahr+step;
	}
}
