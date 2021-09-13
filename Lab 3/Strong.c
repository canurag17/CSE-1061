//Check whether the given number is strong or not.
#include<stdio.h>
int main(){
    int n;
    printf("Anurag Chowdhury\n");
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp=n,rem,sum=0,f=1;
    while(temp>0){
        rem=temp%10;
        temp=temp/10;
        f=1;
        int i=1;
        while(i<=rem){
            f=f*i;
            i++;
        }
        sum=sum+f;
    }
    if(sum==n)
        printf("%d is a Strong number",n);
    else
        printf("%d is Not a Strong number",n);
    return 0;
}
