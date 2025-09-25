/*Challenge 3 : Affichage des Nombres Premiers
Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers de 1 à n. Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.*/

#include <stdio.h>

int main() {
    int n, i, j, premier;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    printf("Nombres premiers de 1 a %d :\n", n);

    for (i = 2; i <= n; i++) {
        premier = 1; 
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                premier = 0; 
                break;
            }
        }
        if (premier)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}