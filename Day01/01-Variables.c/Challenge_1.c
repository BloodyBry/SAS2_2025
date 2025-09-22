/*Challenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : 
nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.*/

#include <stdio.h>

int main()
{
    char nom[20], prenom[20], sexe[20], email[50];
    int age;

    printf("Entrer Votre Nom: ");
    scanf(" %[^\n]", nom);
    
    printf("Entrer Votre Prenom: ");
    scanf(" %[^\n]", prenom);

    printf("Entrer votre sexe: ");
    scanf("%s", sexe);

    printf("Entrer Votre age: ");
    scanf("%d", &age);

    printf("Entrer Votre Email: ");
    scanf("%s", email);

    printf("\n-----Vos Infos-----\n");

    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Sexe: %s\n", sexe);
    printf("Age: %d\n", age);
    printf("Email: %s\n", email);

    return 0;
}