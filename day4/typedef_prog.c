#include<stdio.h>
typedef struct employ{
    int salary;
    int age;
    char name[20];

}day;
main()
{
    day var;
    var.salary=100000;
    var.age=200;
    printf("%d,%d",var.salary,var.age);
}