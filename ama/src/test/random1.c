#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int dim, i;
    printf("Bitte Größe des Arrays angeben:\n");
    scanf("%d", &dim);
    int *numArray = (int *)malloc(dim * sizeof(int));
    for (i = 0; i < dim; i++)
        numArray[i] = i;
    for (i = 0; i < dim; i++)
        printf("%d - ", numArray[i]);
    free(numArray);
    for (i = 0; i < dim; i++)
        printf("%d - ", numArray[i]);
    return EXIT_SUCCESS;
}