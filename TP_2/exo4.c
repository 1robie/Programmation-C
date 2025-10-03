#include <stdio.h>

int saisie(char*userchar) {
    scanf(" %c", userchar);
    switch (*userchar) {
        case 'r':
        case 'R':
        case 'g':
        case 'G':
        case 'b':
        case 'B':
            return 0;
        case 'Q':
        case 'q':
            return 1;
        default:
            return -1;
    }
}

void afficher_menu() {
    printf("/***********\\\n");
    printf("* \033[0;31mR : red\033[0m   *\n");
    printf("* \033[0;32mG : green\033[0m *\n");
    printf("* \033[0;34mB : blue\033[0m  *\n");
    printf("*************\n");
    printf("* q : leave *\n");
    printf("\\***********/\n");
    int leaveCode;
    char userChar;
    do {
        leaveCode = saisie(&userChar);
        if (leaveCode == -1) {
            printf("\033[0;31mErreur\033[0m\n");
            return;
        }
        if (userChar != 'q' && userChar != 'Q')
            printf("La couleur choisie est %c\n",userChar);
    } while (leaveCode != 1);
}

int main() {
    afficher_menu();
    return 0;
}