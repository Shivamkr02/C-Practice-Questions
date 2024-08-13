// Expected output format - "Area of circle is A having the radius R". Replace A with area & R with radius.


#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    float area = 3.14*r*r;
    printf("Area of circle is %0.2f having the radius %d ",area,r);

    return 0;
}
