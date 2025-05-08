#include <stdio.h>

int summation(int *x, int *y)
{
    int sum = *x + *y;
    printf("%d", sum);
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    summation(&x, &y);

    return 0;
}