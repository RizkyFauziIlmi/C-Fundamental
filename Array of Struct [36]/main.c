#include <stdio.h>

// define a student struct
struct student
{
    char name[25];
    float gpa;
};

int main()
{
    // create student objects
    struct student student1 = {"John", 5.0};
    struct student student2 = {"Doe", 3.0};
    struct student student3 = {"Rizky", 2.0};
    struct student student4 = {"Fauzi", 1.0};

    // create an array of students
    struct student students[] = {student1, student2, student3, student4};

    // print out the name and GPA of each student
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%s, ", students[i].name); // print the name of the student
        printf("%f\n", students[i].gpa);  // print the GPA of the student
    }

    return 0;
}
