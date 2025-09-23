/*Challenge 2 : Calcul de Prime d'Assurance Auto
Écrivez un programme C pour calculer la prime 
d'assurance d'une voiture en fonction de :

Âge du conducteur (en années)
Type de voiture (1 pour sportive, 2 pour utilitaire,
3 pour familiale)
Nombre d'accidents au cours des 5 dernières années
Les règles de calcul sont :

Conducteur de moins de 25 ans : Prime de base * 1.5
Conducteur de 25 à 65 ans : Prime de base
Conducteur de plus de 65 ans : Prime de base * 1.2
Type de voiture sportive : Prime * 2
Type de voiture utilitaire : Prime * 1.2
Type de voiture familiale : Prime * 1.1
Nombre d'accidents > 1 : Ajoutez 30% à la prime*/

#include <stdio.h>

int main()
{
    float prime, prime_base;
    int age, type_voiture, nbr_accident;

    printf("Prime de base: ");
    scanf("%f", &prime_base);

    printf("Age du conducteur: ");
    scanf("%d", &age);

    printf("Type de voiture(1 pour sportive, 2 pour utilitaire, 3 pour familiale): ");
    scanf("%d", &type_voiture);

    printf("Nombre d'accident: ");
    scanf("%d", &nbr_accident);

    if (age < 25)
        prime = prime_base * 1.5;
    else if (age < 65)
        prime = prime_base;
    else
        prime * 1.2;

    switch (type_voiture)
    {
        case 1 : prime *= 2; break;
        case 2 : prime *= 1.2; break;
        case 3 : prime *= 1.1; break;
        default :  printf("\nType de voiture invalide!\n");
        return 1;
    }

    if (nbr_accident > 1)
        prime *= 1.3;
    
    printf("\nLa prime d'assurance de sa voiture est: %.2f\n", prime);

    return 0;
}