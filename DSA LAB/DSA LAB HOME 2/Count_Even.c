#include <stdio.h>
int countEven(int a[], int n)
{
    int count = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            count++;
    }
    return count;
}
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Even numbers = %d", countEven(a, n));
    return 0;
}