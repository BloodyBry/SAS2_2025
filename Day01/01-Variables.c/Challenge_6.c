/*Challenge 6 : Calcul et affichage des résultats
Deux nombres réels, a et b, sont saisis au clavier. 
Calculez et affichez a + b, a - b, a * b, et a / b 
avec précision décimale.*/

#include <stdio.h>

int main()
{
    float a, b;

    printf("entrer deux nombres réels a et b: ");
    scanf("%f %f", &a, &b);

    printf("\n----Résultat----\n");
    printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    if (b != 0)
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    else
        printf("Division par zero est impossible!\n");

    return 0;
}