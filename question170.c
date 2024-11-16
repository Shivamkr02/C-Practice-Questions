#include<stdio.h>
int power(int x , int y);
int main(){
    printf("%d\n",power(2,5));
    return 0;
}
 int power(int x, int y){
    if(y==0)
        return 1;
    return x*power(x,y-1);
 }
