#include <stdio.h>

int summation(int *n)
{
    for (int i = 1; i <= *n; i++)
    {
        printf("%d", i);
        if (i < *n)
        {
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    summation(&n);

    return 0;
}