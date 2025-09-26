#include <stdio.h>

int main(void) {
    int jours;
    do {
        printf("Saisissez un nombres de jours , svp : ");
        scanf("%d", &jours);
    } while (jours <= 0);

    int siecles = jours / 36000;
    int reste = jours % 36000;

    int annees = reste / 360;
    reste = reste % 360;

    int mois = reste / 30;
    reste = reste % 30;

    int semaines = reste / 7;
    int jours_restants = reste % 7;

    printf("%d jours correspondent a :\n", jours);
    printf("%d siecle%s ", siecles, siecles > 1 ? "s" : "");
    printf("%d annee%s ", annees, annees > 1 ? "s" : "");
    printf("%d mois ", mois);
    printf("%d semaine%s ", semaines, semaines > 1 ? "s" : "");
    printf("%d jour%s\n", jours_restants, jours_restants > 1 ? "s" : "");

    return 0;
}
