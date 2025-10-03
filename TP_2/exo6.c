#include <stdio.h>
#include <stdlib.h>


void LireInf2(int*entier) {
    while(scanf("%d",entier)!=1 || *entier<0 || *entier>2) {
        if (getchar() == -1) exit(-1);
    }
}

int arbitre(int score1, int score2) {
    if (score1 == score2) return 0;
    if ((score1 == 0 && score2 == 2) || (score1 == 1 && score2 == 0) || (score1 == 2 && score2 == 1)) return 1;
    return 2;
}


int main() {
    int score1 = 0, score2 = 0, res, val1, val2;
    for (int i = 0; i < 10; i++) {
        printf("Joueur 1 :\n");
        LireInf2(&val1);
        printf("Joueur 2 :\n");
        LireInf2(&val2);
        res = arbitre(val1, val2);
        if (res == 1) score1++;
        else if (res == 2) score2++;
        printf("Résultat de la partie %d : %s\n", i+1, res == 0 ? "Nul" : (res == 1 ? "Joueur 1 gagne" : "Joueur 2 gagne"));
    }
    printf("Score final : Joueur 1 = %d, Joueur 2 = %d\n", score1, score2);
    return 0;
}
