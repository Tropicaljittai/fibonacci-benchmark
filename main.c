#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
    int i, n;
    printf("Enter number of fibonnaci numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");
}