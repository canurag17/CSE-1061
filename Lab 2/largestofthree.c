//Find the largest among given 3 numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int max;
    if(a>=b){
        if(a>=c)
            max=a;
        else
            max=c;
    }
    else if(b>=a){
        if(c>=b)
            max=c;
        else
            max=b;
    }
    printf("%d is the largest number",max);
}
