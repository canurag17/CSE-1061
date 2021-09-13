//Find whether a given matrix is symmetric or not.
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
    int fl=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=a[j][i]){
                fl=0;
                break;
            }
        }
    }
    if(fl==1)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is not Symmetric");
    return 0;
}
