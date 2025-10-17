#include <stdio.h>

#define TAILLE 100
#define N 20

void sommeArrays2(int ** tab, int * S, int nbArrays) {
    for (int i = 0; i < nbArrays; i++) {
        *S = 0;
        for (int j = 0; j < N; j++) {
            *S += tab[i][j];
        }
    }
}


int main() {

    return 0;
}