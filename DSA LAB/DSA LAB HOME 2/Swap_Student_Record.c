#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
void swapStudents(struct Student *a, struct Student *b)
{
    struct Student temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void display(struct Student s)
{
    printf("Name: %s, Roll: %d, Marks: %.1f\n",
           s.name, s.roll, s.marks);
}
int main()
{
    struct Student s1, s2;
    printf("Enter details of Student 1:\n");
    printf("Enter name, roll number and marks:\n");
    scanf("%s%d%f", s1.name, &s1.roll, &s1.marks);
    printf("Enter details of Student 2:\n");
    printf("Enter name, roll number and marks:\n");
    scanf("%s%d%f", s2.name, &s2.roll, &s2.marks);
    printf("\nBefore Swap:\n");
    display(s1);
    display(s2);
    swapStudents(&s1, &s2);
    printf("\nAfter Swap:\n");
    display(s1);
    display(s2);
    return 0;
}