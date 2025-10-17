#include <stdio.h>

#include "exo1.c"
#include "exo5.c"

#define TAILLE_TAB 3
#define TAILLE_TAB2 20


int main() {
    executeExo1();

    int tab[TAILLE_TAB][TAILLE_TAB2];

    for (int i = 0; i < TAILLE_TAB; i++) {
        initAlea(tab[i], TAILLE_TAB2, 6);
    }

    printf("Arrays :\n");
    for (int i = 0; i < TAILLE_TAB; i++) {
        printf("Array n°%d: ", i + 1);
        for (int j = 0; j < TAILLE_TAB2; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int n_max = 6;
    int histo[TAILLE_TAB * n_max + 1];

    histogramme(tab, TAILLE_TAB, TAILLE_TAB2, n_max, histo);

    printf("Print of histogramme (0 à %d):\n", TAILLE_TAB * (n_max - 1));
    for (int i = 0; i <= TAILLE_TAB * (n_max - 1); i++) {
        if (histo[i] > 0) {
            printf("Somme %d : %d occ\n", i, histo[i]);
        }
    }

    return 0;
}
