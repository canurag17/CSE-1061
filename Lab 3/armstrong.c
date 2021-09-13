/*Check if the sum of the cubes of all digits of an inputted number equals the number itself (Armstrong Number). (use while loop)*/
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int rem,temp=n,sum=0;
    while(temp>0){
        rem=temp%10;
        temp=temp/10;
        sum=sum+rem*rem*rem;
    }
    if(sum==n)
        printf("%d is an Armstrong Number",n);
    else
        printf("%d is not an Armstrong number",n);
    return 0;
}
