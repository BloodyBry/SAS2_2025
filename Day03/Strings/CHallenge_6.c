/*Challenge 6 : Compte des Occurrences d'un Caractère
Écrivez un programme C qui lit une chaîne de caractères et un caractère, puis compte et affiche combien de fois le caractère apparaît dans la chaîne.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int count;
    
    count = 0;
    
    printf("entrer une chaine: ");
    scanf(" %[^\n]", str);
    getchar();
    printf("entrer le caractére à compter:  ");
    scanf("%c", &ch);
    
    for (int i = 0; str[i]; i++)
    {
        if (ch == str[i])
            count++;
    }
    printf("le caractére %c est entrés %d fois!\n", ch, count);
}