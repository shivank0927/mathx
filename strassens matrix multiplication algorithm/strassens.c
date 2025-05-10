#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// strassen's matrix multiplication


int main(void){
    srand(time(NULL))

    int MatrixOne[4][4];
    int MatrixTwo[4][4];

    // init
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            MatrixOne[i][j] = rand() % 100 + 1; // generate random val. b/w 1 - 100
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            MatrixTwo[j] = rand() % 100 + 1; // generate random val. b/w 1 - 100
        }
    }

    int dimension = 4; // exp. on 4x4 matrix for now

    int result = recurse(MatrixOne, MatrixTwo, dimension);

    printf("result: \n\n\n\n%10d", result);

    return 0;
}


int recurse(int MatrixOne, int MatrixTwo, int dimension){

    if (dimension <= 2){
        // c = 4 formulas
    }else{
        mid = dimension / 2;

    }





}