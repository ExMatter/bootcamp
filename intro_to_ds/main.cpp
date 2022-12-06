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

// Student *createStudent(Student *payload){

//     Student *newStudent = (Student *)malloc(sizeof(Student));
//     strcpy((*newStudent).name,*payload->name);
//     (*newStudent).age = payload->name;
//     (*newStudent).gpa = payload->name;
//     return newStudent;
// }
void readStudent(Student *s){
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("GPA: %.2lf\n", s->gpa);
}

void updateViaSwap (int *a, int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
void updateStudent(){

}
int main(){
    Student *r = createStudent("Budi", 19, 3.97);
    int agen = 11;
    readStudent(r);
    updateViaSwap(&r->age, &agen);
    readStudent(r);
    printf("Nama saya %s, saya berumur %d tahun dan memiliki GPA sebesar: %.2lf\n", r->name, r->age, r->gpa);
    return 0;
}