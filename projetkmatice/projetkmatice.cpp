// projetkmatice.cpp: Definuje vstupní bod pro aplikaci.
//

#include "projetkmatice.h"
using namespace std;

int main()
{
	int riadky;
	int stlpce;
	int vstup;
	printf("Zadaj pocet riadkov a stlpcov\n");
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

	printf("\nkoniec\n");
	int inp;
	printf("1=sucet 2=rozdiel 3=sucin 4= skalarnysucin 5=determinant 6=transponovana\n");
	printf("zadaj cislo: \n");
	scanf("%d", &inp);
	if (inp >=1 && inp<=3)
	{
		int riadky2;
		int stlpce2;
		int vstup2;
		printf("Zadaj pocet riadkov a stlpcov");
		scanf("%d %d", &riadky2, &stlpce2);
		int matica2[5][5];
		printf("Zadaj prvok matice: ");
		for (int k = 0; k < riadky2; k++)
		{
			printf("\n");
			for (int j = 0; j < stlpce2; j++)
			{
				scanf("%d", &vstup2);
				matica2[k][j] = vstup2;
			}
		}

		printf("\nMatica je : \n");
		for (int k = 0; k < riadky2; k++)
		{
			printf("\n");
			for (int j = 0; j < stlpce2; j++)
			{
				printf("%d\t", matica2[k][j]);
			}
		}
		if (riadky == riadky2 && stlpce == stlpce2)
		{






			if (inp == 1)										//sucet
			{
				for (int k = 0; k < riadky; k++)
				{
					printf("\n");
					for (int j = 0; j < stlpce; j++)
					{
						matica[k][j] += matica2[k][j];
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
			}
		}








		
		if(inp==2)													//rozdiel
		{ 
			for (int k = 0; k < riadky; k++)
			{
				printf("\n");
				for (int j = 0; j < stlpce; j++)
				{
					matica[k][j] -= matica2[k][j];
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
		}
		
	}
	return 0;
}
