// projetkmatice.cpp: Definuje vstupní bod pro aplikaci.
//

#include "projetkmatice.h"
using namespace std;

int main()
{
	int riadky;
	int stlpce;
	int vstup;
	printf("Zadaj pocet riadkov a stlpcov");
	scanf("%d %d", &riadky, &stlpce);
	int matica[5][5];

		printf("Zadaj prvok matice: ");
		for (int k = 0; k < riadky; k++)
		{
			printf("\n");
			for (int j = 0; j < stlpce; j++)
			{
				scanf("%d", &vstup);
				matica[k][j] = vstup;
			}
		}

	printf("\nMatica je : \n");
	for (int k = 0; k < riadky; k++)
	{
		printf("\n");
		for (int j = 0; j < stlpce; j++)
		{
			printf("%d\t", matica[k][j]);
		}
	}
printf("koniec");
	return 0;
}
