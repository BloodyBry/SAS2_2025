/*Challenge 10 : Trouver un Sous-String
Écrivez un programme C qui lit une chaîne de caractère
s principale et une sous-chaîne, puis vérifie si la 
sous-chaîne est présente dans la chaîne principale. 
Affichez un message indiquant si la sous-chaîne est 
trouvée ou non.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sub_str[100], str[100];

    printf("entrer la chaine: ");
    scanf(" %[^\n]", str);
    printf("entrer la sous chaine: ");
    scanf(" %[^\n]", sub_str);

    if(strstr(str, sub_str))
        printf("%s est trouvé dans %s\n", sub_str, str);
    else
        printf("%s n'est pas trouvé dans %s\n", sub_str, str);

    return 0;
}