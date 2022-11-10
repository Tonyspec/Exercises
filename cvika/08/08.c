#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("Enter limit: \n");
    int limit = 0;
    scanf("%d", &limit);

    int *p = (int*)malloc(limit*sizeof(*p));
    for (int i = 0; i < limit + 1; i++)
        p[i] = i;
    

    free(p);
}