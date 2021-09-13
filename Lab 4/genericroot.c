//Find out the generic root of any number.
#include<stdio.h>
int main(){
    int n,s=0,r;
    printf("Anurag Chowdhury\n");
    printf("Enter a number\n");
    scanf("%d",&n);
    int i;
    while(n>0){
        r=n%10;
        n=n/10;
        s+=r;
        if(n==0 && s>=10){
            n=s;
            s=0;
        }
    }
    printf("Generic root is %d",s);
    return 0;
}
