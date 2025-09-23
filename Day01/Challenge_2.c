/*Challenge 2 : Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère 
saisi par l'utilisateur est une voyelle ou non en 
utilisant l'instruction switch case.*/

#include <stdio.h>

int main()
{
    char c;
    
    printf("entrer un charactere: ");
    scanf("%c", &c);

    switch(c)
    {
        case 'A':
        case 'a':
            printf("%c est une voyelle.\n", c); break;
        case 'E':
        case 'e':
            printf("%c est une voyelle.\n", c); break;
        case 'O':
        case 'o':
            printf("%c est une voyelle.\n", c); break;
        case 'U':
        case 'u':
            printf("%c est une voyelle.\n", c); break;
        case 'I':
        case 'i':
            printf("%c est une voyelle.\n", c); break;
        case 'Y':
        case 'y':
            printf("%c est une voyelle.\n", c); break;
        default : printf("%c n'est pas une voyelle\n", c);
    }
    
    return 0;
}