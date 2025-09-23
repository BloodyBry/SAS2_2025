/*Challenge 1 : Initialisation et Affichage
Écrivez un programme C qui initialise un tableau 
d'entiers avec des valeurs données et affiche ces 
valeurs. Par exemple, vous pouvez initialiser un 
tableau avec les valeurs [1, 2, 3, 4, 5] et afficher 
chaque valeur sur une nouvelle ligne.*/

#include <stdio.h>

int main()
{
    int i;
    int tab[] = {1, 2, 3, 4, 5};

    i = 0;
    while (i < 5)
    {
        printf("%d\n", tab[i]);
        i++;
    }

    return 0;
}