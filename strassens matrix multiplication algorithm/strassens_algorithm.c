#include <stdio.h>
#include <time.h>


int main(){

	srand(time(NULL));

	int matrixOne[8][8];
	int matrixTwo[8][8];

	int resultMatrix[8][8];

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			int element = srand() % 100 + 1; // random element b/w 1, 100

			resultMatrix[i][j] = element;
		}
	}
	
	
