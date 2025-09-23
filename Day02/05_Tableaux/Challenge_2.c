/*Challenge 2 : Saisie et Affichage des Éléments
Écrivez un programme C qui demande à l'utilisateur 
le nombre d'éléments d'un tableau, puis demande à 
l'utilisateur de saisir ces éléments. 

Affichez ensuite les éléments du tableau.*/

#include <stdio.h>

int main()
{
    int n;

    printf("entrer le nombre d'elements: ");
    scanf("%d", &n);

    int tab[n];

    for (int i = 0; i < n; i++)
    {
        printf("entrer l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Les elements du tableau sont: ");
    for (int i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}