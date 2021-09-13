#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    printf("Enter a number\n");
    int n,s=0,rem;
    scanf("%d",&n);
    for(;n>0;){
        rem=n%10;
        s=s+rem;
        n=n/10;
        if(n==0 && s>9){
            n=s;
            s=0;
        }
        else if(n==0 && s<10)
            break;
    }
    printf("Generic root is %d",s);
}
