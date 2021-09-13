/*Write a C program to evaluate the following expression for the values a = 30,
b=10, c=5, d=15*/
#include<stdio.h>
int main(){
    int a=30,b=10,c=5,d=15;
    printf("My name is Anurag Chowdhury\n");
    float exp1=(a+b)*c*1.0/d;
    float exp2=((a+b)*c)*1.0/d;
    float exp3=a+(b*c)*1.0/d;
    float exp4=(a+b)*(c*1.0/d);
    printf("Result of (a+b)*c/d is %f\n",exp1);
    printf("Result of ((a+b)*c)/d is %f\n",exp2);
    printf("Result of a+(b*c)/d is %f\n",exp3);
    printf("Result of (a+b)*(c/d) is %f\n",exp4);
    return 0;
}
