/*Challenge 5 : Trouver le Minimum
Écrivez un programme C qui trouve et affiche le plus 
petit élément dans un tableau d'entiers. Le programme 
doit demander le nombre d'éléments et les éléments 
du tableau.*/

#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("entrer le nombre d'élements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("le nombre d'elements doit etre positif!\n");
        return 1;
    }

    int tab[n];

    for (i = 0; i < n; i++)
    {
        printf("entrer l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    int min = tab[0];
    for (i = 1; i < n; i++)
    {
        if (tab[i] < min)
            min = tab[i];
    }

    printf("le plus petit element est : %d\n", min);

    return 0;
}