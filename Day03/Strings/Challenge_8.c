/*Challenge 8 : Conversion en Minuscules
Écrivez un programme C qui lit une chaîne de caractères 
et convertit tous les caractères en minuscules. 
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
        str[i] = tolower(str[i]);
        i++;
    }

    printf("En miniscule: %s\n", str);

    return 0;
}