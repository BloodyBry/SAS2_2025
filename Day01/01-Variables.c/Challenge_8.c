/*Challenge 8 : Calcul de la moyenne géométrique
Écrivez un programme en C pour trouver la moyenne 
géométrique de trois nombres saisis par l'utilisateur. 
Formule :

Moyenne géométrique = (a * b * c)^(1/3)*/

#include <stdio.h>
#include <math.h>

int main()
{
    float MG, a, b, c;

    printf("entrer a: ");
    scanf("%f", &a);

    printf("entrer b: ");
    scanf("%f", &b);

    printf("entrer c: ");
    scanf("%f", &c);

    MG = pow((a * b * c), 1.0 / 3.0);
    printf("La moyenne géométrique est: %.2f", MG);

    return 0;
}