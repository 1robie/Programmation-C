#include <stdio.h>

#define TAILLE 100

void sommeArrays(int * A, int * B, int * S, int taille) {
    for (int i = 0; i < taille; i++, A++, B++, S++) {
        *S = *A + *B;
    }
}

int main() {
    int A[TAILLE], B[TAILLE], S[TAILLE];
    for (int i = 0; i < 20; i++) {
        A[i] = i;
        B[i] = i * 2;
    }
    sommeArrays(A, B, S, 20);
    for (int i = 0; i < 20; i++) {
        printf("S[%d] = %d (%d+%d)\n", i, S[i], A[i], B[i]);
    }
    return 0;
}