#include <stdio.h>
void rare(int a, int b, int a1[], int b1[])
{
    int i, j, count = 0;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (a1[i] == b1[j])
            {
                count++;
            }
        }
    }
    if (count == b)
    {
        printf("array entered is a subset");
    }
}
void main()
{
    int a, b, c;
    printf("enter size of array:");
    scanf("%d", &a);
    int arr[a];
    printf("enter elements");
    for (c = 0; c < a; c++)
    {
        scanf("%d", &arr[c]);
    }

    printf("enter size of array:");
    scanf("%d", &b);
    int ar[b];
    printf("enter elements");
    for (c = 0; c < b; c++)
    {
        scanf("%d", &ar[c]);
    }
    rare(a, b, arr, ar);
}
