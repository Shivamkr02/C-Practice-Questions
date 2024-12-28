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
void sortByNames(struct Employee e[],int n){
    int r,i;
    struct Employee temp;
    for(r=1;r<n;i++){
        for(i=0;i<=n-1;i++){
            if(strcmp(e[i].name,e[i+1].name)>0){
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }
        }
    }
}