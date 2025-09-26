/*Challenge 2 : Structure avec Tableau
Écrivez un programme C qui définit une structure pour
 représenter un étudiant avec les champs nom, prenom, 
 et un tableau d'entiers pour stocker les notes. 
 Assignez des valeurs aux champs et aux notes, 
 puis affichez les informations de l'étudiant.*/

 #include <stdio.h>
 #include <string.h>

 #define NOMBRES_NOTES 5
 
 typedef struct{
    char nom[50];
    char prenom[50];
    int notes[NOMBRES_NOTES];
 }etudiant;


 int main()
 {
    etudiant etu;

    strcpy(etu.nom, "EL YAZIDI");
    strcpy(etu.prenom, "Adnane");

    etu.notes[0] = 18;
    etu.notes[1] = 16;
    etu.notes[2] = 17;
    etu.notes[3] = 11;
    etu.notes[4] = 14;

    printf("Nom: %s\n", etu.nom);
    printf("Prenom: %s\n", etu.prenom);
    printf("Notes: ");
    for (int i = 0; i < NOMBRES_NOTES; i++)
        printf("%d ", etu.notes[i]);
    return 0;
 }