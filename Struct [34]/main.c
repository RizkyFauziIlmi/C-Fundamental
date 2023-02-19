#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    int age;
    float gpa;
};

int main()
{
    struct student s1;

    // set values for the fields
    s1.id = 12345;
    strcpy(s1.name, "John Smith");
    s1.age = 20;
    s1.gpa = 3.5;

    // print out the values
    printf("Student ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}
