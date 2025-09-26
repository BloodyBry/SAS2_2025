#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    
    printf("entrer la premiére chaine: ");
    scanf(" %[^\n]", str1);
    getchar();
    printf("entrer la deuxieme chaine: ");
    scanf(" %[^\n]", str2); 
    
    strcat(str1, str2);
    printf("Chaine concaténée: %s\n", str1);
    return 0;
}