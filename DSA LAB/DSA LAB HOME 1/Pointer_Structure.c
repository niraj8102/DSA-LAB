# include<stdio.h>
# include<string.h>
struct Student{
    char name[20];
    int roll;
    float marks;
};

void Update( struct Student *s ,float m){
    strcpy(s->name, "Raju");
    s->roll = 005;
    s->marks = 88.8;
    
}
void main(){

    struct Student s = {"Ankit",004,55.5};
    Update( &s,5.5);
    printf("Name: %s \n",s.name);
    printf("Roll: %d \n",s.roll);
    printf("Marks: %f \n",s.marks);
}