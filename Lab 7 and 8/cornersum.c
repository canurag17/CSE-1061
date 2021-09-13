#include<stdio.h>
int CornerSum(int a[10][10],int n,int m){
    return a[0][0]+a[n-1][m-1]+a[0][m-1]+a[n-1][0];
}
int main(){
    printf("Anurag Chowdhury\n");
    printf("Enter no. of rows in the matrix\n");
    int n,m;
    int a[10][10];
    scanf("%d",&n);
    printf("Enter no. of columns in the matrix\n");
    scanf("%d",&m);
    printf("Enter Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of corners of entered matrix is %d",CornerSum(a,n,m));
}
