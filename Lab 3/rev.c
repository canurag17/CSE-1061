//1.Reverse a given number and check if it is a palindrome or not. (use while loop)
#include<stdio.h>
int main(){
    int n;
    printf("Anurag Chowdhury\n");
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp=n;
    int rem,rev=0;
    while(temp>0){
        rem=temp%10;
        temp=temp/10;
        rev=rev*10+rem;
    }
    printf("Reverse of %d is %d\n",n,rev);
    if(rev==n)
        printf("%d is a Palindrome",n);
    else
        printf("%d is not a Palindrome",n);
    return 0;
}
