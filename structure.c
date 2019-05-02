#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[51];
    char fname[51];
    int year;
    float gpa;
};
void getStudent(struct student* st);
void printStudent(struct student* st);
void cpyStudent(struct student*dest, struct student source);
int cmpStudent(struct student*st1, struct student *st2);

int main()
{
    struct student student1;
    struct student studentCopy;
    getStudent(&student1);
    printStudent(&student1);
    cpyStudent(&studentCopy, student1);
    printStudent(&studentCopy);
    if(cmpStudent(&student1, &studentCopy) == 0)
    {
        printf("They are same.");
    }
    else
    {
        printf("They are not same.");
    }
    return 0;
}

void getStudent(struct student* st)
{
    printf("Please enter your info!\n----------------\n");
    printf("Please enter your name > ");
    scanf("%50s", st -> name);
    printf("Please enter your family name > ");
    scanf("%50s", st -> fname);
    printf("Please enter the year you started at Seneca > ");
    scanf("%d", &st -> year);
    printf("Please enter you GPA > ");
    scanf("%f", &st -> gpa);
}
void printStudent(struct student* st)
{
    printf("\n\nStudent information\n------------\n");
    printf("name: %s\n", st -> name);
    printf("surname: %s\n",st -> fname);
    printf("year started: %d\n",st -> year);
    printf("GPA: %.2f\n",st -> gpa);
}
void cpyStudent(struct student*dest, struct student source)
{
    strcpy(dest -> name, source.name);
    strcpy(dest -> fname, source.fname);
    dest -> year = source.year;
    dest -> gpa = source.gpa;
}
int cmpStudent(struct student*st1, struct student *st2)
{
    if(strcmp(st1 -> name, st2 -> name) == 0
        && strcmp(st1 -> fname, st2 -> fname) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
