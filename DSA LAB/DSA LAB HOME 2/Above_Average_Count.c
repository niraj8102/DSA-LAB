#include <stdio.h>
float average(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return (float)sum / n;
}
int aboveAvg(int a[], int n, float avg)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] > avg)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    float avg = average(a, n);
    printf("Average = %.1f, Above = %d",
           avg, aboveAvg(a, n, avg));
    return 0;
}