#include <stdio.h>

#define TAILLE 100
#define N 20

void histogramme(int tab[][N], int nb_tab, int taille, int n_max, int histo[]) {
    for (int i = 0; i <= nb_tab * n_max; i++) {
        histo[i] = 0;
    }

    for (int pos = 0; pos < taille; pos++) {
        int somme = 0;
        for (int i = 0; i < nb_tab; i++) {
            somme += tab[i][pos];
        }
        histo[somme]++;
    }
}