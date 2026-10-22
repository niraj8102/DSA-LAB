#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
void addGrace(struct Student a[], int n, float g)
{
    int i;
    for(i = 0; i < n; i++)
    {
        a[i].marks += g;
    }
}
int countPass(struct Student a[], int n, float cut)
{
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i].marks >= cut)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student a[n];
    for(i = 0; i < n; i++)
    {
        printf("Enter the name, roll number and marks of student %d:\n", i + 1);
        scanf("%s%d%f", a[i].name, &a[i].roll, &a[i].marks);
    }
    addGrace(a, n, 5);
    printf("After grace: ");
    for(i = 0; i < n; i++)
    {
        printf("%.0f ", a[i].marks);
    }
    printf("\nPassed = %d", countPass(a, n, 40));
    return 0;
}