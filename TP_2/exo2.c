#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 0;
    int max = 100;
    srand(time(NULL));

    int random_number = rand() % (max - min + 1) + min;
    int user_guess = -1;
    int attempts = 0;
    printf("J'ai choissi un nombre entre %d et %d:\nAvous de deviner.\n", min, max);
    do {
        printf("Saisisez un nombre :");
        scanf("%d", &user_guess);
        attempts++;
        if (user_guess < random_number) {
            printf("Trop petit.\n");
        } else if (user_guess > random_number) {
            printf("Trop grand.\n");
        }
    } while (user_guess != random_number);
    printf("Bravo gagne en %d essais\n",attempts);

    return 0;
}
