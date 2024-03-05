#include <stdio.h>
void check(int x[], int n);
int main()
{
    int n, i, j, count = 0;
    printf("enter the size of array ");
    scanf("%d", &n);
    int x[n];
    printf("enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    check(x, n);
    return 0;
}

void check(int x[], int n)
{
    int sum = 0, avg, i;
    for (i = 0; i < n; i++)
    {
        sum += x[i];
    }
    printf("The numbers greater than average are :");
    avg = sum / n;
    for (i = 0; i < n; i++)
    {
        if (x[i] > avg)
        {
            printf("%d ", x[i]);
        }
    }
}