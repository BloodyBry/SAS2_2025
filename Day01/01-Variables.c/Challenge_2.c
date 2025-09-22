/*Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la 
transforme en Kelvin. Formule :

K = C + 273.15*/

#include <stdio.h>

int main()
{
    float K, C;

    printf("Entrer la temperature en Celsius: ");
    scanf("%f", &C);

    K = C + 273.15;

    printf("la temperature en Kelvin est: %.2f\n", K);

    return 0;
}