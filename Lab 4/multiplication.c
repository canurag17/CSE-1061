/*1. Generate the multiplication table for ‘n’ numbers up to ‘k’ terms (using nested
for loops)*/
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    int n,k;
    printf("Enter value of n\n");
    scanf("%d",&n);
    printf("Enter value of k\n");
    scanf("%d",&k);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}
