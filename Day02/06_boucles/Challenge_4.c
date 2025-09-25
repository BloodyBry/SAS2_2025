/*Challenge 4 : Inversion d'un Entier
Écrivez un programme C qui lit un entier à plusieurs 
chiffres et l'affiche en ordre inverse sans utiliser 
de tableaux. Par exemple, si l'entrée est 12345, 
affichez 54321.*/

#include <stdio.h>

int main() {
    int n, reste;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    printf("Entier inversé : ");

    while (n != 0) {
        reste = n % 10;      
        printf("%d", reste);
        n = n / 10;      
    }

    printf("\n");
    return 0;
}