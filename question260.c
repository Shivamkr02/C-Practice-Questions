#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct Marks{
    struct Student stu;
    int chem_marks,maths_marks,phy_marks;
};
struct Marks setMarks(struct Student s, int c,int m,int p){
    struct Marks m1;
    m1.stu=s;
    m1.chem_marks=c;
    m1.maths_marks=m;
    m1.phy_marks=p;
    return m1;
}
void printPercentage(struct Marks m){
    float per;
    per=(m.chem_marks+m.maths_marks+m.phy_marks)/3.0;
    printf("\n%d %s Percentage=%0.2f%%",m.stu.rollno,m.stu.name,per);
}
int main(){
    struct Marks m[5];
    setMarks(s[0],71,89,60);
    // i have to try again
    setMarks
}