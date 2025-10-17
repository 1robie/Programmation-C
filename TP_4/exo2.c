#include <stdio.h>

#define TAILLE 100

int position(int tab[], int taille, int elt) {
    for (int i=0;i<taille;i++,tab++) {
        if (*tab == elt) return i;
    }
    return -1;
}

int main() {
    int tab[TAILLE];
    for (int i=0;i<20;i++) {
        tab[i] = i*5;
    }
    int elt = 55;
    int pos = position(tab, 20, elt);
    if (pos != -1) {
        printf("Élément %d trouvé à la position %d\n", elt, pos);
    } else {
        printf("Elément %d non trouvé dans le tableau\n", elt);
    }

    return 0;
}