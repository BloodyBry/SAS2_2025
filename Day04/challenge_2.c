/*Tri par insertion*/

#include <stdio.h>

int main()
{
    int T[] = {47, 2, 16, 8, 1};
    int taille = 5;

    for (int i = 0; i < taille; i++)
    {
        int tmp = T[i];
        int j = i - 1;
        while (tmp < T[j] && j >= 0)
        {
            T[j + 1] = T[j];
            j--;
        }
        T[j + 1] = tmp;
    }

    for (int i = 0; i < taille; i++)
    {
        printf("%d ", T[i]);
    }
}