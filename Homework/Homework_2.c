#include <stdio.h>
#define CHAR_BITS 8

void 
print_binint(int num)
{
    int sup = CHAR_BITS*sizeof(int);
    while(sup >= 0)
    {
        if(num & (((long int)1) << sup))
            printf("1");
        else
            printf("0");
        sup--;
    }
    printf("\n");
}


int main()
{
	int numero,a,num,cont=0;
	
	for(numero=2;numero<=50;numero++){ //Puedes cambiar el número límite para imprimir números:)
		for(a=2;a<=numero;a++)
		if(numero%a==0)
		cont++;
		if(cont==1)
		printf("%d\n",numero);
		cont=0;
	}	
}
