#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct Employee e1 = {45,"shivam kumar",85000.0};
    struct Employee e2;
    struct Employee e3;
    e3.id = 47;
    strcpy(e3.name,"Shristi");
    e3.salary = 75000.0;
    printf("%s",e3.name);
    return 0;
}