#include <stdio.h>
#define lower 0
#define upper 150
#define step 20

main()
{
	int fahr,celsius;

	celsius=lower;
	while(celsius<=upper){
		fahr=(celsius*9)/5+32;
		printf("%d\t %d\n",celsius,fahr);
		celsius=celsius+step;
	}
}
