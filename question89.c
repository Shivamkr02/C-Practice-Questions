#include<stdio.h>

int main(){

    int a,b,L,i,flag;

    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=2,L=1,flag=0;a>1||b>1;)
    {
        if(a%i==0){
            a=a/i;
            flag=1;
        }
        if(b%i==0){
            b=b/i;
            flag=1;
        }
        if(flag==1){
            L=L*i;
            flag=0;
        }
        else
            i++;
    }
    printf("LCM is %d",L);

    printf("\n");

    // int a, b, l = 0;
    // printf("Enter two numbers: ");
    // scanf("%d%d", &a, &b);

    // for (l = (a > b ? a : b); l <= a * b; l++) {
    //     if (l % a == 0 && l % b == 0) {
    //         printf("LCM is %d\n", l);
    //         break;
    //     }
    // }
    


//   int num1, num2, max, lcm;

//     // Taking input from the user
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     // Start from the maximum of the two numbers
//     max = (num1 > num2) ? num1 : num2;

//     // Find LCM using a for loop
//     for (int i = max;; i++) {
//         if (i % num1 == 0 && i % num2 == 0) {
//             lcm = i;
//             break;
//         }
//     }

//     // Output the result
//     printf("LCM of %d and %d is %d\n", num1, num2, lcm);


    return 0;
}