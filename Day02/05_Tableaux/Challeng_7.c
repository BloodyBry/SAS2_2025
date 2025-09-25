/*Challenge 7 : Tableau en Ordre Croissant
Écrivez un programme C qui demande à l'utilisateur de
saisir un tableau d'entiers, puis affiche le tableau 
trié en ordre croissant sans utiliser de fonction de 
tri prédéfinie.*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int temp;
    
    printf("entrer le nombres d'element: ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("le nombre d'element doit etre positif!\n");
        return 1;
    }
    
    int tab[n];
    
    for (i = 0; i < n; i++)
    {
        printf("entrer l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    
    //Tri a bulles
    for(i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    
    printf("Tableau trie en ordre croissant: \n");
    for (i = 0; i < n; i++)
        printf("%d", tab[i]);
    
    printf("\n");
    
    return 0;
}