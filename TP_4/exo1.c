#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

void initAlea(int tab[], int taille, int max) {
    for (int i =0; i<taille; i++,tab++) {
        *tab = rand() % max;
    }
}

int executeExo1() {
    srand(time(NULL));
    int tab[TAILLE];
    initAlea(tab, TAILLE, 50);

    printf("Random Array:\n");
    for (int i = 0; i < TAILLE; i++) {
        printf(">%d\n", tab[i]);
    }
    printf("\n");
    return 0;
}
