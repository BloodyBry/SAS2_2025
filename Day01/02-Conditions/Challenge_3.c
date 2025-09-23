/*Challenge 3 : Somme de Deux Valeurs
Écrivez un programme C pour calculer la somme 
de deux valeurs entières données. Si les deux 
valeurs sont identiques, le programme doit 
renvoyer le triple de leur somme.*/

#include <stdio.h>

int main()
{
    float sum;
    float a, b;

    printf("donner a: ");
    scanf("%f", &a);

    printf("donner b: ");
    scanf("%f", &b);

    if (a != b)
    {
        sum = a + b;
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    }
    else
        printf("le triple est: %.2f", (a + b) * 3);

    return 0;

}