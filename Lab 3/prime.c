//Generate prime numbers between 2 given limits.(use while loop)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    printf("Anurag Chowdhury\n");
    printf("Enter the lower limit\n");
    int l1,l2;
    scanf("%d",&l1);
    printf("Enter upper limit\n");
    scanf("%d",&l2);
    int temp=l1;
    printf("Prime numbers from %d to %d are\n",l1,l2);
    while(temp<=l2){
        int i=2,fl=1;
        while(i<=sqrt(temp)){
            if(temp%i==0){
                fl=0;
                break;
            }
            i++;
        }
        if(fl==1)
            printf("%d ",temp);
        temp++;
    }
    return 0;
}
