#include <stdio.h>
    int main(void) {
    int a = 10;
    int b = 2;
    int resultat;
    if (a == 0 || b == 0){
        printf("you cant divide zero or by zero\n");
        return 1;
    } else{
        resultat = a / b;
    }
    printf("Resultat : %d\n", resultat);
    return 0;
}