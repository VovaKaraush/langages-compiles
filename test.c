#include <stdio.h>
int main(void) {
    char prenom[] = "Alice";
    int age = 20;
    float taille = 1.75f;
    char initiale = 'A';
    // Completez l'affichage formate ici
    // %s pour les chaines, %d pour les entiers
    // %c pour un caractere, %.2f pour les flottants
    printf("+-------------------------------+\n");
    printf("|       FICHE D'IDENTITE        |\n");
    printf("+-------------------------------+\n");
    printf("| Prénom : %s                |\n", prenom);
    printf("| Age    : %d                   |\n", age);
    printf("| Taille : %.2f                 |\n", taille);
    printf("| Initial: %c                    |\n",initiale);
    printf("+-------------------------------+\n");
    printf("|     Code de sortie : 0        |\n");
    printf("+-------------------------------+\n");
    return 0;
}
//commentaire