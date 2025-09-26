/*Challenge 1 : Définition et Utilisation de Structure
Écrivez un programme C qui définit une structure pour 
représenter une personne avec les champs 
nom, prenom, et age. 

Créez une variable de cette structure, 
assignez des valeurs aux champs, 
et affichez ces valeurs.
*/

#include <stdio.h>

typedef struct
{
    char nom[50];
    char prenom[50];
    int age;
}personne;

int main()
{
    personne p1;

    printf("Donner les informations de la personne!\n");
    printf("Taper le nom: ");
    scanf(" %[^\n]", p1.nom);
    printf("Taper le prenom: ");
    scanf(" %[^\n]", p1.prenom);
    printf("Taper l'age: ");
    scanf("%d", &p1.age);

    printf("-------infos------\n");
    printf("Nom: %s\n", p1.nom);
    printf("Prenom: %s\n", p1.prenom);
    printf("Age: %d\n", p1.age);

    return 0;
}