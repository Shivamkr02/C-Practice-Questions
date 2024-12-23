#include<stdio.h>
#include<string.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("value of a is %d and value of b is %d",a,b);
}
