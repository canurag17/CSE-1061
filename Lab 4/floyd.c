//Generate Floyd’s triangle using natural numbers for a given limit N. (using for loops)
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    printf("Enter value of n\n");
    int n,k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
