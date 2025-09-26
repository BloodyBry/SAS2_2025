/*Challenge 2 : Longueur de la Chaîne
Écrivez un programme C qui calcule et affiche la 
longueur d'une chaîne de caractères sans utiliser 
la fonction strlen().*/

#include <stdio.h>

int main()
{
    char str[100];
    int len;

    len = 0;

    printf("Entrer une chaine: ");
    scanf(" %[^\n]", &str);

    while(str[len])
        len++;

    printf("La longeur de la chaine est: %s\n", len);

    return 0;
}