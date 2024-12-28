#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[20];
    float salary;
};
struct Employee input();
void displayEmployee(struct Employee);
int main(){
    struct Employee e2;
    e2=input();
    displayEmployee(e2);
}
struct Employee input(){
    struct Employee e1;
    printf("Enter Employee id: ");
    scanf("%d",&e1.id);
    fflush(stdin);
    printf("Enter name: ");
    fgets(e1.name,20,stdin);
    e1.name[strlen(e.name)-1]='\0';
    printf("Eneter salary: ");
    scanf("%f",&e1.salary);
    return e1;
}
void displayEmployee(struct Employee e1){
    printf("id = %d\nname = %ssalary = %f",e1.id,e1.name,e1.salary);
}
struct Employee highestSalaryEmployee(struct Employee e[],int n){
    int i;
    struct Employee emp;
    emp=e[0];
    for(i=1;i<=n-1;i++){
        if(emp.salary<e[i].salary)
            emp=e[i];
    }
    return emp;
}