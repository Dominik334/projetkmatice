// projetkmatice.cpp: Definuje vstupní bod pro aplikaci.
//

#include "projetkmatice.h"
#include "funkce.h"
using namespace std;



int main()
{	const char* vystupniCesta = "C:\\Skola\\počítače a programovanie\\programy 1.semester\\projetkmatice\\projetkmatice\\vystup.txt";
		FILE* vystupniSoubor;
		if (fopen_s(&vystupniSoubor, vystupniCesta, "w")) {
			printf("Subor sa nepodarilo otvorit.\n");
			return -1;

		}
	while (true)
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

		int inp;
		printf("1=sucet 2=rozdiel 3=sucin 4= skalarny sucin 5=transponovana 6=determinant\n");
		printf("zadaj cislo: \n");
		scanf("%d", &inp);
		if (inp >= 1 && inp <= 3)
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






				if (inp == 1)				//sucet
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
						fprintf(vystupniSoubor, "\n");
						for (int j = 0; j < stlpce; j++)
						{
							printf("%d\t", matica[k][j]);
							fprintf(vystupniSoubor, "%d\t", matica[k][j]);
						}
					}
				}










				if (inp == 2)					//rozdiel
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
						fprintf(vystupniSoubor, "\n");
						for (int j = 0; j < stlpce; j++)
						{
							printf("%d\t", matica[k][j]);
							fprintf(vystupniSoubor, "%d\t", matica[k][j]);
						}
					}
				}
			}
			else
			{
				printf("\nOcenujeme tvuj slechetny zamer \n spocitat maticovou operaci ktera vyzaduje matice stejneho typu, \n s maticemi typu ruzneho.\n Vzhledem k tve snaze jsme ti aspon zobrazili tve dilo, \n aby ses mohl nad sebou zamyslet a priste vedel,\n co jsi udelal spatne.\n");
			}
			if (inp == 3)							//sucin
			{
				if (stlpce == riadky2)
				{
					int matica3[5][5] = { 0 };
					for (int i = 0; i < riadky; i++)
					{
						printf("\n");
						for (int j = 0; j < stlpce2; j++)
						{
							for (int k = 0; k < stlpce; k++)
							{
								matica3[i][j] += matica[i][k] * matica2[k][j];
							}
						}
					}
					printf("\nMatica je : \n");
					for (int i = 0; i < riadky2; i++)
					{
						printf("\n");
						fprintf(vystupniSoubor, "\n");
						for (int j = 0; j < stlpce2; j++)
						{
							printf("%d\t", matica3[i][j]);
							fprintf(vystupniSoubor, "%d\t", matica3[i][j]);
						}
					}
				}

			}

		}
		if (inp == 4)							//skalarny sucin
		{
			int inp2;
			printf("Zadaj skalar");
			scanf("%d", &inp2);
			for (int k = 0; k < riadky; k++)
			{
				printf("\n");
				for (int j = 0; j < stlpce; j++)
				{
					matica[k][j] *= inp2;
				}
			}
			printf("\nMatica je : \n");
			for (int k = 0; k < riadky; k++)
			{
				printf("\n");
				fprintf(vystupniSoubor, "\n");
				for (int j = 0; j < stlpce; j++)
				{
					printf("%d\t", matica[k][j]);
					fprintf(vystupniSoubor, "%d\t", matica[k][j]);
				}
			}
		}
		if (inp == 5)									//transponovana
		{
			int maticaT[5][5];
			for (int k = 0; k < riadky; k++)
			{
				printf("\n");
				for (int j = 0; j < stlpce; j++)
				{
					maticaT[j][k] = matica[k][j];
				}
			}
			printf("\nMatica je : \n");
			for (int k = 0; k < riadky; k++)
			{
				printf("\n");
				fprintf(vystupniSoubor, "\n");
				for (int j = 0; j < stlpce; j++)
				{
					printf("%d\t", maticaT[k][j]);
					fprintf(vystupniSoubor, "%d\t", maticaT[k][j]);
				}
			}
		}
		if (inp == 6)							//determinant
										
		{
			int determinant;
			if (riadky != stlpce)
			{
				printf("Ale no tak, determinant vieme urcit iba zo stvorcovej matice (-_-) ");				
			}
			if (riadky == 1 && stlpce == 1) 
			{
				determinant = matica[0][0];
				printf("determinant je \n");
				printf("Tak to je snad trivialni, prece %d", determinant);
				fprintf(vystupniSoubor, "%d", determinant);
			}
			if (riadky == 2 && stlpce == 2)
			{
				determinant = ((matica[0][0] * matica[1][1]) - (matica[0][1] * matica[1][0]));
				printf("determinant je \n");
				printf("%d", determinant);
				fprintf(vystupniSoubor, "%d", determinant);
			}
			if (riadky == 3 && stlpce == 3)
			{

				printf("determinant je \n");
				printf("%d", det(matica));
				fprintf(vystupniSoubor, "%d", det(matica));
			}
			if (riadky == 4 && stlpce == 4)
			{

				printf("%d", laplas(matica));
				fprintf(vystupniSoubor, "%d", laplas(matica));
			}
		}
		printf("\n Pokud te uz nebavi pocitat dalsi silene priklady zadej: 0");
		printf("\n V pripade ze ta to nepreslo napis lubovolne cislo: ");
		int pokracuj;
		scanf("%d", &pokracuj);
		if(pokracuj==0)
		{
			break;
		}
	}
	fclose(vystupniSoubor);
	return 0;
}
