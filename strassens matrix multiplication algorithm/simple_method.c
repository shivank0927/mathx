#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));
	int matrixOne[8][8];
	int matrixTwo[8][8];
	int newMatrix[8][8];

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			int element = rand() % 100 + 1;
			matrixOne[i][j] = element;
		}
	}

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			int elementTwo = rand() % 100 + 1;
			matrixTwo[i][j] = elementTwo;
		}
	}

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			printf("%4d", matrixOne[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			printf("%4d", matrixTwo[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------\n");


	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			newMatrix[i][j] = 0;
			for(int k = 0; k < 8; k++){
				newMatrix[i][j] += (matrixOne[i][k] * matrixTwo[k][j]);
			}
		}
	}
	printf("\nsolution with O(n^3) time complexity\n");
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			printf("%7d", newMatrix[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}

