/*Challenge 5 : Inversion de Chaîne
Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;
    
    printf("entrer une chaine de caractére: ");
    scanf(" %[^\n]", str);
    
    len = 0;
    while (str[len])
        len++;
    
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
        
    printf("\n");
    return 0;
}