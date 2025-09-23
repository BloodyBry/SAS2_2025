/*Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en 
kilomètres par heure (km/h) et la transforme 
en mètres par seconde (m/s). Formule :

m/s = km/h * 0.27778*/

#include <stdio.h>

int main()
{
    float ms, kmh;

    printf("Entrer la vitesse en Km/h: ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("La vitesse en ms: %.2f", ms);

    return 0;
}