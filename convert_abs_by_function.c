#include <stdio.h>

int my_abs(int *x)
{
    int ans = abs(*x);
    return ans;
}

int main()
{

    int x;
    scanf("%d", &x);

    int ans = my_abs(&x);

    printf("%d", ans);

    return 0;
}