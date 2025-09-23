/*Challenge 9 : Calcul de la distance entre deux 
points dans un espace 3D
Écrivez un programme C pour trouver la distance 
entre deux points donnés dans un espace 3D. 
Formule :

Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)*/

#include <stdio.h>
#include <math.h>

int main()
{
    float distance, x1, x2, y1, y2, z1, z2;

    printf("donner les coordonnées du premier point (x1, y1 et z1): ");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("donner les coordonnées du deuxiéme point (x1, y1 et z1): ");
    scanf("%f %f %f", &x2, &y2, &z2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("La distance entre deux points est: %.2f", distance);

    return 0;
}