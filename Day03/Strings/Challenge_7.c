/*Écrivez un programme C qui lit une chaîne de caractères 
et convertit tous les caractères en majuscules. 
Affichez la chaîne modifiée.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("entrer une chaine: ");
    scanf(" %[^\n]", &str);

    i = 0;
    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("En majuscule: %s\n", str);

    return 0;
}