#include <stdio.h>

#define TAILLE 100

void afficheTab(int tab[], int taille) {
    for (int i = 0; i<taille; i++) {
        printf("%d\n", tab[i]);
    }
}

void changeTab(int tab[], int indice) {
    printf("TAB\nAdresse de tab: %p\n", tab);
    printf("Adresse de &tab[0]: %p\n\n", &tab[0]);

    tab[indice] +=2;
}

int main() {
    int tab[TAILLE] = {1,2,3,4,5};

    printf("Start:\n");
    afficheTab(tab, 5);

    printf("Adresse de tab: %p\n", (void*)tab);
    printf("Adresse de &tab[0]: %p\n", (void*)&tab[0]);

    changeTab(tab,1);

    printf("After:\n");
    afficheTab(tab,5);

    return 0;
}