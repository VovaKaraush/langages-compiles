#include <stdio.h>

int main(void) {
    int choix;
    double valeur;
    double valeur_mod;
    printf("=== Convertisseur universel ===\n");
    printf("1. Kilometres -> Miles\n");
    printf("2. Kilogrammes -> Livres\n");
    printf("3. Celsius -> Fahrenheit\n");
    printf("4. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    if (choix == 4) {
        printf("Au revoir !\n");
        return 0;
    }
    switch (choix) {
        case 1:
            printf("\n=====Conversion des Kilometres en Miles=====\n\n");
            printf("Entrez le nombre de kilometres a convertir : ");
            scanf("%lf", &valeur);
            valeur_mod = valeur * 0.621371;
            printf("Dans %.2f kilometres font environ %.5f miles\n", valeur, valeur_mod);
            break;
        case 2: 
            printf("\n=====Conversion des Kilogrammes en Livres=====\n\n");
            printf("Entrez le nombre de kilogrammes a convertir : ");
            scanf("%lf", &valeur);
            valeur_mod = valeur * 2.20462;
            printf("%.1f kilogrammes font environ %.2f livres\n", valeur, valeur_mod);
            break;
        case 3: 
            printf("\n=====Conversion des Celsius en Fahrenheit=====\n\n");
            printf("Entrez la temperature en Celsius a convertir : ");
            scanf("%lf", &valeur);
            valeur_mod = (valeur * 1.8) + 32;
            printf("%.2f degres Celsius font environ %.2f degres Fahrenheit\n", valeur, valeur_mod);
            break;
    }
    return 0;
}