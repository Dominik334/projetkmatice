#include "funkce.h"
//determinant 3*3
int det(int MATICA[5][5]) {
	return MATICA[0][0] * (MATICA[1][1] * MATICA[2][2] - MATICA[1][2] * MATICA[2][1]) -
		MATICA[0][1] * (MATICA[1][0] * MATICA[2][2] - MATICA[1][2] * MATICA[2][0]) +
		MATICA[0][2] * (MATICA[1][0] * MATICA[2][1] - MATICA[1][1] * MATICA[2][0]);
}

int laplas(int matrix[5][5]) {
	int result = 0;

	for (int i = 0; i < 4; ++i) {
		// Vytvorte pomocnú maticu 3x3 pre každý minor
		int minor[5][5];

		for (int j = 1; j < 4; ++j) {
			for (int k = 0, l = 0; k < 4; ++k) {
				if (k == i) continue;
				minor[j - 1][l++] = matrix[j][k];
			}
		}

		// Rekurzívne vypoèítajte determinant minora a pridajte do výsledku
		result += matrix[0][i] * det(minor) * ((i % 2 == 0) ? 1 : -1);
	}
	return result;
}