#include <stdio.h>
#include <stdlib.h>


void ajouteDix(int*entier) {
    printf("%d\n",*entier);
    *entier += 10;
    printf("%d\n",*entier);
}

void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int getInt() {
    int n = 1;
    while (scanf("%d",&n) != 1) {
        if (getchar() == -1) exit(-1);
    }
    return n;
}

int main() {
    int n = getInt();
    printf(">%d adresse %p\n",n,&n);
    ajouteDix(&n);
    printf(">%d adresse %p\n",n,&n);

    printf("Entrez deux entiers pour tester l’échange :\n");
    int a = getInt();
    int b = getInt();
    printf("Avant échange : a = %d, b = %d, adresses %p, %p\n", a, b, &a, &b);
    echanger(&a, &b);
    printf("Après échange : a = %d, b = %d, adresses %p, %p\n", a, b, &a, &b);

    return 0;
}