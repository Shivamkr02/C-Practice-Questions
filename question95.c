#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    int H;
    for(H=a>b?a:b;H>=1;H--){
        if(a%H==0 && b%H==0)
            break;
    }
    if(H==1){
        printf("Given number is Co-Prime");
    }else{
        printf("Given number is not Co-Prime",H);
    }
    return 0;
}