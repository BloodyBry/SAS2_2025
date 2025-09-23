/*Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et 
affiche l'état de l'eau à cette température (solide, liquide, gaz). 
Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz
*/

#include <stdio.h>

int main()
{
    float C;

    printf("entrer la temperature en Celsius: ");
    scanf("%f", &C);

    if (C < 0)
        printf("Solide\n");
    else if (C >= 0 && C < 100)
        printf("Liquide\n");
    else
        printf("Gaz\n");

    return 0;
}