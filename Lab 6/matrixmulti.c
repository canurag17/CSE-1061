//Perform matrix multiplication
#include<stdio.h>
int main(){
    int n,m,r,p;
    printf("Anurag Chowdhury\n");
    printf("Enter no. of rows for 1st matrix\n");
    int a[10][10],b[10][10],ans[10][10];
    scanf("%d",&n);
    printf("Enter no. of columns for 1st matrix\n");
    scanf("%d",&m);
    printf("Enter 1st Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter no. of rows for 2nd matrix\n");
    scanf("%d",&r);
    printf("Enter no. of columns for 2nd matrix\n");
    scanf("%d",&p);
    printf("Enter 2nd Matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if(m!=r)
        printf("Matrix Multiplication is not possible\n");
    else{
        printf("Matrix after multiplication:\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                ans[i][j]=0;
                for(int k=0;k<r;k++){
                    ans[i][j]+=a[i][k]*b[k][j];
                }
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
