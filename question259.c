#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[20];
};
struct Student inputStudent(){
    struct Student s;
    printf("Enter Student roll number and name: ");
    scanf("%d",&s.rollno);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void displayStudent(struct Student s){
    printf("\n%d %s",s.rollno,s.name);
}
void inputStudentArray(struct Student s[],int n){
    int i;
    for(i=0;i<n;i++){
        s[i]=inputStudent();
    }
} 
void displayStudentArray(struct Student s[],int n){
    int i;
    for(i=0;i<n;i++){
        displayStudent(s[i]);
    }
}
int main(){
    struct Student s[10];
    inputStudentArray(s,10);
    displayStudentArray(s,10);
    printf("\n");
    return 0;
}