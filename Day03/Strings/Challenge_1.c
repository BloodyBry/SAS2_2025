/*Challenge 1 : Affichage d'une Chaîne
Écrivez un programme C qui lit une chaîne de caractères
 entrée par l'utilisateur et l'affiche à l'écran.*/

 #include <stdio.h>

 int main()
 {
    char s[100];

    printf("entrer une chaine de caractères: ");
    scanf(" %[^\n]", &s);

    printf("la chaine de caractère entée est: %s\n", s);

    return 0;
 }