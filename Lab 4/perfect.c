//Check whether a given number is perfect or not.
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    int n,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            s=s+i;
    }
    if(s==n)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
    return 0;
}
