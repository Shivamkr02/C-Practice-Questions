#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("Enter 9 matrices: ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 9 matrices: ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}