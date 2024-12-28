#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee input(){
    struct Employee e1;
    printf("Enter employee id, name and salary: ");
    scanf("%d",e1.id);
    fflush(stdin);
    fgets(e1.name,20,stdin);
    scanf("%f",e1.salary);
}
int main(){
    input();
    
    return 0;
}