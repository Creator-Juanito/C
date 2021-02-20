#include <stdio.h>
#define lower 0
#define upper 300
#define step 30

main()
{
	int fahr,celsius;

	fahr=lower;
	while(fahr<=upper){
		celsius=5*(fahr-32.0)/9;
		printf("%d\t %d\n",fahr,celsius);
		fahr=fahr+step;
	}
}
