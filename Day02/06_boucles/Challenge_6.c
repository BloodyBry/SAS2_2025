/*Challenge 6 : Facteurs d'un Nombre
Écrivez un programme C qui affiche tous les facteurs d'un nombre entier positif n entré par l’utilisateur. Par exemple, pour n = 36, affichez : 1, 2, 3, 4, 6, 9, 12, 18, 36.*/

#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("entrer un nombre: ");
    scanf("%d", &n);

    printf("Facteur de %d: ", n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}