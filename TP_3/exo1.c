#include <stdio.h>

int valAbsolueV1(int val) {
    return val < 0 ? -val : val;
}
void valAbsolueV2(int * val) {
    *val = valAbsolueV1(*val);
}

int main() {
    int n;
    printf("Entrer un nombre: ");
    // Partie 1

    scanf("%d", &n);
    // printf("\nAvant valAbsolueV1 : n =%d, Adresse de n=%p\n",n,&n);
    // int p = valAbsolueV1(n);
    // printf("Apres valAbsolueV1 : p =%d, Adresse de n=%p\n",p,&p);

    printf("\nAvant valAbsolueV1 : n =%d, Adresse de n=%p\n",n,&n);
    valAbsolueV2(&n);
    printf("Après valAbsolueV1 : n =%d, Adresse de n=%p\n",n,&n);


}