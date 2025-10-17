#include <stdio.h>
#include <math.h>

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * */
/* BUT : resoudre une equation du second degre                            */
/* PARAM : 3 valeurs float, qui sont les coefficients de l'equation       */
/*         2 adresses de float, qui stockeront les solutions possibles    */
/* RETOUR : un entier, qui sera le nombre de solutions                    */
/*          Plus precisemment :                                           */
/*                  -1, s'il y a une infinite de solutions                */
/*                  0, s'il n'y a pas de solution                         */
/*                  1, s'il y a une racine                                */
/*                  2, s'il y a deux racines distinctes                   */
/* EFFETS DE BORDS : S'il y a 1 solution, elle sera place a l'adresse de x*/
/*                   S'il y a 2 solutions, elles seront placees           */
/*                   aux adresses de x et y                               */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  * * * * */

int resoudre(float a, float b, float c, float * x, float * y){
    float delta;

    // Cas où a = 0 : ce n'est pas une équation du second degré
    if (a == 0) {
        if (b == 0) {
            return c == 0 ? -1 : 0;
        }
        *x = -c / b;
        return 1;
    }
    delta = b * b - 4 * a * c;

    if (delta < 0) {
        return 0;
    }
    if (delta == 0) {
        *x = -b / (2 * a);
        return 1;
    }
    *x = (-b - sqrt(delta)) / (2 * a);
    *y = (-b + sqrt(delta)) / (2 * a);
    return 2;
}

int main(void){
    float r_un, r_deux;
    float a, b, c;
    int nb_solutions;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Equation %d:\n", i + 1);
        printf("Entrez les coefficients a, b, c: ");
        scanf("%f %f %f", &a, &b, &c);

        printf("\nEquation: %.2fx² + %.2fx + %.2f = 0\n", a, b, c);

        nb_solutions = resoudre(a, b, c, &r_un, &r_deux);

        switch(nb_solutions) {
            case -1:
                printf("Infinité de solutions\n");
                break;
            case 0:
                printf("Pas de solution réelle\n");
                break;
            case 1:
                printf("Une solution: x = %.2f\n", r_un);
                break;
            case 2:
                printf("Deux solutions: x1 = %.2f, x2 = %.2f\n", r_un, r_deux);
                break;
            default:;
        }
        printf("\n");
    }
    return 0;
}
