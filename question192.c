#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],sum;
    printf("Emter 9 matrices: ");
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
        for(int j=0;j<=2;j++)
        {
            for(int k=0,sum=0;k<=2;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}