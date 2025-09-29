#include <stdio.h>

int main()
{
    int tab[] = {8, 2, 4, 3};
    int n;
    int i, j, temp;
    
    n = 4;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    
    return 0;
}