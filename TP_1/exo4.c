#include <stdio.h>

int main(){
    int entier;
    scanf("%d",&entier);

    if (entier<=0){
        printf("Le nombre doit être strictement positif.\n");
        return 0; 
    }
    for (int k =1; k<=entier; k++){
        if (k % 2 == 0 && k % 3 == 0) {
            printf("FizzBuzz\n");
        } else if (k % 2 == 0) {
            printf("Fizz\n"); 
        } else if (k % 3 == 0) {
            printf("Buzz\n");
        }
    }
    return 0;
}