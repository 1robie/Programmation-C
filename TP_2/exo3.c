#include <stdio.h>

int main() {
    char c[2];
    for (int i = 0; i < 2; i++) {
        // scanf("%c",&c[i]);
        scanf(" %c",&c[i]);
    }
    printf("*%c*\n", c[0]);
    printf("*%c*\n", c[1]);
    return 0;
}