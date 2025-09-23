/*Challenge 1 : Paire ou Impaire
Écrivez un programme qui demande un nombre et affiche si 
ce nombre est pair ou impair.*/

#include <stdio.h>

int main()
{
    int n;

    printf("Donner un nombre: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d est paire\n", n);
    else
        printf("%d est impaire\n", n);

    return 0;
}