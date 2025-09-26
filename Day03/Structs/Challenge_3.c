/*Challenge 3 : Passage de Structure en Argument
Écrivez un programme C qui définit une structure pour 
représenter un rectangle avec les champs longueur et 
largeur. Écrivez une fonction qui prend une variable 
de cette structure en argument et calcule l'aire du 
rectangle. 
Affichez l'aire dans le programme principal.*/

#include <stdio.h>

typedef struct{
    float longueur;
    float largeur;
}rectangle;

float calculerAire(rectangle r)
{
    return r.longueur * r.largeur;
}

int main()
{
    rectangle rect;

    rect.longueur = 2.5;
    rect.longueur = 3.1;

    calculerAire(rect);

    printf("L'Aire du rectangle est %.2f", rect);

}