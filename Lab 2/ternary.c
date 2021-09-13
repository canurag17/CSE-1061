//Find the smallest among three numbers using conditional operator.
#include<stdio.h>
int main(){
    int x,y,z;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter values of x,y and z\n");
    printf("Enter value of x\n");
    scanf("%d",&x);
    printf("Enter value of y\n");
    scanf("%d",&y);
    printf("Enter value of z\n");
    scanf("%d",&z);
    int min=(x<y)?((x<z)?x:z):(y<z?y:z);
    printf("Smallest of %d,%d,%d is %d",x,y,z,min);
}
