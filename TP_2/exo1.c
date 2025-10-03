#include <stdio.h>

int main() {
    for (int i = 48; i <= 57; i++) { // 0-9
        printf("%c : %d\n", i, i);
    }
    for (int i = 65; i <= 90; i++) { // A-Z
        printf("%c : %d\n", i, i);
    }

    return 0;
}