#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[255];
    int age;
    double gpa;
};
//Data struct --> CRUD(Create, Read, Update, Delete)
Student *createStudent(const char *name, int age, double gpa){

    Student *newStudent = (Student *)malloc(sizeof(Student));
    strcpy((*newStudent).name,name);
    (*newStudent).age = age;
    (*newStudent).gpa = gpa;
    return newStudent;
}

int main(){
    Student *r = createStudent("Budi", 19, 3.97);
    printf("Nama saya %s, saya berumur %d tahun dan meiliki GPA sebesar: %.2lf\n", r->name, r->age, r->gpa);
    return 0;
}