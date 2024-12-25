#include<stdio.h>
int highestMarks(int **ptr, int n,int size[]){
    int i,j,max;
    max=ptr[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<size[i];j++){
            if(max<ptr[i][j])
                max=ptr[i][j];
        }
    }
    return max;
}
int main(){
    int A[]={23,67,89,11,23,42,59,16,8,81};
    int B[]={44,77,88,22,11};
    int C[]={50,70,20,30,90,60,80};
    int D[]={3,6,9,1,0};
    int E[]={81,75,50,63,40,49,97,36};
    int *p[5],size[]={10,5,7,5,8};
    int hmarks;
    p[0]=A;
    p[1]=B;
    p[2]=C;
    p[3]=D;
    p[4]=E;
    hmarks=highestMarks(p,5,size);
    printf("Highest marks: %d",hmarks);
}