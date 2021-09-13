/*Write a program to demonstrate use of break and continue statements in while and
do-while loops.*/
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    printf("Odd numbers from 1 till %d excluding %d are\n",n,n);
    int i=1;
    while(i<=n){
        if(i%2==0){
            i++;
            continue;
        }
        else if(i==n)
            break;
        else
            printf("%d ",i);
        i++;
    }
    printf("\nMultiples of 10 from %d to 1 excluding 10 are\n",n);
    i=n;
    do{
       if(i%10!=0){
         i--;
         continue;
       }
       else if(i==10)
          break;
       else
       printf("%d ",i);
       i--;

    }
    while(i>0);
    return 0;
}
