/*Challenge 9 : Suppression des Espaces
Écrivez un programme C qui lit une chaîne de caractères
 et supprime tous les espaces. 
 Affichez la chaîne résultante.*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    int j;

    printf("entrer une chaine: ");
    scanf(" %[^\n]", str);

    i = 0;
    j = 0;
    while (str[i])
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';


    printf("la chaine sans espace: %s\n", str);
}