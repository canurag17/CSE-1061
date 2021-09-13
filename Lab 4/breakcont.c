//Write a program to demonstrate use of break and continue statements in for loop
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    int n,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Even numbers from 1 to %d are\n",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
            continue;
        else
            printf("%d ",i);
    }
    printf("\n");
    printf("Enter %d numbers to find out if positive or negative\nEnter 0 to stop before %d numbers\n",n,n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x==0)
            break;
        else{
            if(x>0)
                printf("%d is Positive\n",x);
            else if(x<0)
                printf("%d is Negative\n",x);
        }
    }
}
