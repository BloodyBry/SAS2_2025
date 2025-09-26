/*Challenge 4 : Comparaison de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères 
 compare si elles sont égales ou non. Affichez un message 
 indiquant si les chaînes sont égales ou différentes.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    
    printf("entrer la premiere chaine: ");
    scanf(" %[^\n]", str1);
    getchar();
    printf("entrer la deuxième chaine: ");
    scanf(" %[^\n]", str2);
    
    if (strcmp(str1, str2) == 0)
        printf("les deux chaine sont identique!\n");
    else
        printf("les deux chaine sont different!\n");
        
    return 0;
}