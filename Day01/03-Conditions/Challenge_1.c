/*Challenge 1 : Évaluation d'un Prêt
Écrivez un programme C qui évalue l'éligibilité 
pour un prêt en fonction de :

Revenu annuel (en euros)
Score de crédit (sur 1000)
Durée du prêt (en années)
Les conditions pour l'éligibilité sont :

Revenu >= 30 000 € et Score de crédit >= 700 et 
Durée du prêt <= 10 ans : Éligible
Revenu >= 30 000 € et Score de crédit >= 650 et 
Durée du prêt <= 15 ans : Éligible avec conditions
Revenu < 30 000 € ou Score de crédit < 650 ou 
Durée du prêt > 15 ans : Non éligible
Affichez un message en fonction de l'éligibilité.
*/

#include <stdio.h>

int main()
{
    int rev, sc, dp;

    printf("entrer le Revenue annuel(en $): ");
    scanf("%d", &rev);

    printf("entrer le score du crédit(sur 1000): ");
    scanf("%d", &sc);

    printf("entrer la durée du pret(en année): ");
    scanf("%d", &dp);

    if (rev >= 30000 && sc >= 700 && dp <= 10)
        printf("Eligible.\n");
    else if (rev >= 30000 && sc >= 650 && dp <= 15)
        printf("Eligible avec conditions.\n");
    else
        printf("Non Eligible.\n");

    return 0;
}