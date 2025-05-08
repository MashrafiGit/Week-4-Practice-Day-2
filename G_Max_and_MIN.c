#include <stdio.h>
#include <limits.h>

void summation(int a[], int *n)
{
    int max = 0;
    int min = INT_MAX;

    for (int i = 0; i < *n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d %d", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    summation(a, &n);

    return 0;
}