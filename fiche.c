#include <stdio.h>

int main(void) {
    char prenom[] = "Jonathan";
    int age = 19;
    float taille = 1.75f;
    char initiale = 'J';

    printf("+--------------------------------+\n");
    printf("|       FICHE D'IDENTITE         |\n");
    printf("+--------------------------------+\n");
    printf("| Prenom  : %-20s |\n", prenom);
    printf("| Age     : %-2d ans               |\n", age);
    printf("| Taille  : %.2f m               |\n", taille);
    printf("| Initiale: %-20c |\n", initiale);
    printf("+--------------------------------+\n");
    printf("| Code de sortie : 0 (succes)    |\n");
    printf("+--------------------------------+\n");

    return 0;
}