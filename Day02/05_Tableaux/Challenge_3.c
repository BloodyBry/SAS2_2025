/*Challenge 3 : Somme des Éléments
Écrivez un programme C qui calcule et affiche la somme
des éléments d'un tableau d'entiers. Le programme 
doit demander le nombre d'éléments, puis les éléments
du tableau, et afficher la somme totale.*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int somme = 0;

    printf("entrer le nombre d'elements: ");
    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++)
    {
        printf("entrer l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n; i++)
    {
        somme += tab[i];
    }

    printf("la somme des elements est: %d\n", somme);

    return 0;

}