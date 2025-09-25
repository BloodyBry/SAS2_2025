/*Challenge 8 : Copie d'un Tableau
Écrivez un programme C qui copie les éléments d'un 
tableau d'entiers dans un autre tableau. Affichez 
les éléments du tableau original et du tableau copié 
pour vérifier que la copie est correcte.*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre d'elements doit etre positif !\n");
        return 1;
    }

    int tab_original[n];
    int tab_copie[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab_original[i]);
    }

    for (i = 0; i < n; i++) {
        tab_copie[i] = tab_original[i];
    }

    printf("Tableau original :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab_original[i]);
    }
    printf("\n");

    printf("Tableau copié :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab_copie[i]);
    }
    printf("\n");

    return 0;
}