#include <stdio.h>
int countKey(int a[], int n, int key)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, i, key;
    printf("Numbers of Elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the Elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key element: ");
    scanf("%d", &key);
    printf("%d appears %d times",key, countKey(a, n, key));
    return 0;
}