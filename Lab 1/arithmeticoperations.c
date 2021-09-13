//Write a C program to find the sum, difference,product and quotient of 2 number
#include<stdio.h>
int main(){
    printf("My name is Anurag Chowdhury\n");
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    int prod=a*b;
    int sum=a+b;
    int diff=a-b;
    int quo=a/b;
    printf("Sum is %d\nDifference is %d\nProduct is %d\nQuotient is %d",sum,diff,prod,quo);
    return 0;
}
