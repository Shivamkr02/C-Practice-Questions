#include<stdio.h>
#include<string.h>
#include<math.h>
struct Time difference(struct Time t1,struct Time t2){
    struct Time temp;
    int seconds = abs((t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec));
    temp.hr=seconds/3600;
    seconds=seconds%3600;
    temp.min=seconds/60;
    temp.sec=seconds%60;
    return temp;
};
struct Time difference(struct Time t1,struct Time t2);
int main(){
    return 0;
}