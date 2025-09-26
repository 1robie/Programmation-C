#include <stdio.h>
#include <string.h>

int main(){
    float number;
    printf("Nombre:\n");
    scanf("%f", &number);
    if (number == (int)number){
        printf("Entier\n");
    } else {
        printf("Foat\n");
    }
    return 0;
}