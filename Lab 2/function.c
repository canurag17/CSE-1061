//Write a program that will read the value of x and evaluate the following function(signum function)
#include<stdio.h>
int main(){
    int x,y;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter value of x\n");
    scanf("%d",&x);
    if(x>0){
        y=1;
    }
    else if(x<0){
        y=-1;
    }
    else{
        y=0;
    }
    printf("Value of y is %d",y);
    return 0;
}
