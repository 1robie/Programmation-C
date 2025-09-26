#include <stdio.h>
int main(void) {
    /* données */
    int n, q;  /*2 nombres entiers fournis par l’utilisateur */
    /* resultat */
    float moyenne;  /* moyenne des nombres n et p */
    printf("Ce programme calcule la moyenne de deux entiers\n");
    printf("Donnez le premier nombre : ");
    scanf("%d", &n);  /* saisie du premier nombre */
    printf("Donnez le deuxième nombre : ");
    scanf("%d", &q);  /* saisie du deuxième nombre */
    if (n > 0 && q > 0) {
        moyenne = ((float)n + q) / 2; /* calcul de la moyenne */
        printf("La moyenne des deux nombres est : %5.2f, moyenne\n",moyenne);
    } else {
        printf("Les deux nombres doivent être positifs ou nuls\n");
    }
}
