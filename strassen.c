#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));
	int matrix[8][8];

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			int element = rand() % 100 + 1;
			matrix[i][j] = element;
		}
	}

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			printf("%4d", matrix[i][j]);
		}
		printf("\n");
	}


	return 0;
}

