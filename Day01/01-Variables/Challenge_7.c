/*Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne 
pondérée de trois nombres donnés par l'utilisateur 
avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5*/

#include <stdio.h>

int main()
{
    float n1, n2, n3, M;

    printf("entrer n1: ");
    scanf("%f", &n1);

    printf("entrer n2: ");
    scanf("%f", &n2);

    printf("entrer n3: ");
    scanf("%f", &n3);

    M = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    printf("La moyenne pondérée est: %.2f\n", M);

    return 0;
}