#include<stdio.h>
int main(){
    int n,m;
    printf("Anurag Chowdhury\n");
    printf("Enter no. of rows\n");
    int a[10][10];
    scanf("%d",&n);
    printf("Enter no. of columns\n");
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<n;i++){
        if (i!=n / 2){
            int temp=a[i][i];
            a[i][i]=a[i][n-i-1];
            a[i][n-i-1]=temp;
        }
    }
    printf("Matrix after interchange is\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
