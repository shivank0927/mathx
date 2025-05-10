#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int matrixOne[8][8];
    int matrixTwo[8][8];
    int newMatrix[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matrixOne[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matrixTwo[i][j] = rand() % 100 + 1;
        }
    }

    printf("\n\n\n");

    printf("matrix X:\n\n\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%4d", matrixOne[i][j]);
        }
        printf("\n");
    }

    printf("\nmatrix Y:\n\n\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%4d", matrixTwo[i][j]);
        }
        printf("\n");
    }

    printf("\n-------------------------------------\n\n");

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            newMatrix[i][j] = 0;
            for (int k = 0; k < 8; k++) {
                newMatrix[i][j] += matrixOne[i][k] * matrixTwo[k][j];
            }
        }
    }

    printf("\nresult (X x Y):\n\n\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%10d", newMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
