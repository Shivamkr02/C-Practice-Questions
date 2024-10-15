 #include<stdio.h>

int hcf(int a,int b);

 int main(){
    int res = hcf(2,5);
    printf("%d",res);
 }

 int hcf(int a,int b){
    int h;
    for(h=a<b?a:b;h>=1;h--)
        if(a%h==0&&b%h==0)
            return h;
 }