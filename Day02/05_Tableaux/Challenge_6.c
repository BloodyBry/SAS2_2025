/*Challenge 6 : Multiplication des Éléments
Écrivez un programme C qui multiplie chaque élément 
d'un tableau d'entiers par un facteur donné et 
affiche le tableau résultant. Le programme doit 
demander le nombre d'éléments, les éléments du 
tableau, et le facteur de multiplication.*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int facteur;
    
    printf("donner le nombre d'elements: ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("le nombre d'elements doit etre positif!\n");
        return 1;
    }
    
    int tab[n];
    
    for (i = 0; i < n; i++)
    {
        printf("entrer l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    
    printf("donner le facteur de multiplication: \n");
    scanf("%d", &facteur);
    
    for (i = 0; i < n; i++)
        tab[i] *= facteur;
        
    printf("Tableau apres multiplication: \n");
    for (i = 0; i < n; i++)
        printf("%d ", tab[i]);
        
    printf("\n");
    
    return 0;
}