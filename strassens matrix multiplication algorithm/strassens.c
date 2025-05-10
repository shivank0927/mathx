#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL))

    int MatrixOne = [8][8];
    int MatrixTwo = [8][8];
    
    // init
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            MatrixOne[i][j] = rand() % 100 + 1; // generate random val. b/w 1 - 100
        }
    }
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            MatrixTwo[j] = rand() % 100 + 1; // generate random val. b/w 1 - 100
        }
    }


    return 0;
}