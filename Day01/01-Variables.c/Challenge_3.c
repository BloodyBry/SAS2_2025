/*Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en 
kilomètres et la transforme en yards. Formule :

Yards = Km * 1093.61*/

#include <stdio.h>

int main()
{
    float Km, Yards;

    printf("entrer la distance en kilomètres: ");
    scanf("%f", &Km);

    Yards = Km * 1093.61;

    printf("La distance en Yards: %.2f", Yards);

    return 0;
}