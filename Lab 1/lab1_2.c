#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct dob{
    int date;
    int month;
    int year;
};
struct student_info{
    int roll_no;
    char name[50];
    float CGPA;
    struct dob age;
};
//pass by value
void print(struct student_info s)
{
printf("Student name(passed by Value) is %s,Roll is %d CGPA is %0.2f and DOB is %d/%d/%d\n",s.name,s.roll_no,s.CGPA,s.age.date,s.age.month,s.age.year);
}
//pass by referrence
void printByRef(struct student_info *s)
{
printf("Student name(passed by Reference) is %s,Roll is %d CGPA is %0.2f and DOB is %d/%d/%d\n",s->name,s->roll_no,s->CGPA,s->age.date,s->age.month,s->age.year);
}
int main()
{
struct student_info s1={250,"Spandan",8.45};
s1.age.date=14;
s1.age.month=3;
s1.age.year=2001;
print(s1);
struct student_info *ptr;
ptr=&s1;
printByRef(ptr);
return 0;
}
