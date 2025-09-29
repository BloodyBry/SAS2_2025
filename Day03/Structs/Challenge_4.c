#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int main()
{
    Point *p = malloc(sizeof *p);
    if (p == 0)
    {
        printf("Errur d'allocation memore!\n");
        return 1;
    }
    
    p->x = 10;
    p->y = 20;
    
    printf("la valeur de x: %d\n", p->x);
    printf("la valeur de y: %d\n", p->y);
    
    free(p);
    
    return 0;
}