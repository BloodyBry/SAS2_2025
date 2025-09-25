/*Challenge 9 : Inversion d'un Tableau
Écrivez un programme C qui inverse les éléments d'un 
tableau d'entiers. Par exemple, si le tableau est 
[1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. 
Affichez le tableau inversé.*/

#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Entrez le nombre d'elements du tableau: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre d'elements doit etre positif !\n");
        return 1;
    }

    int tab[n];

    printf("Entrez les %d elements :\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }

    printf("Tableau inversé :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}