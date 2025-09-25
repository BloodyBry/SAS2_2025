/*Challenge 5 : Somme des N Nombres
Écrivez un programme C qui demande à l’utilisateur un nombre entier n et calcule la somme des n premiers nombres naturels. Par exemple, si n est 5, la somme est 1 + 2 + 3 + 4 + 5 = 15*/

#include <stdio.h>

int main() {
    int n;
    int i;
    int somme = 0;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        somme = somme + i;  
    }

    printf("La somme des %d premiers nombres naturels est: %d\n", n, somme);

    return 0;
}
