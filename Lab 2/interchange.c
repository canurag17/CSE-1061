//Swap two numbers without using third variable.
#include<stdio.h>
int main(){
    int a,b;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Value of a before swapping is %d\n",a);
    printf("Value of b before swapping is %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a after swapping is %d",a);
    printf("\nValue of b after swapping is %d",b);
    return 0;
}
