//Find the trace and norm of a given square matrix.
#include<stdio.h>
#include<math.h>
int main(){
    printf("Anurag Chowdhury\n");
    int n,m,trace=0;
    float norm=0;
    int a[10][10];
    printf("Enter no. of rows\n");
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
            norm+=(a[i][j]*a[i][j]);
        }
        printf("\n");
    }
    norm=sqrt(norm);
    for(int i=0;i<n;i++)
        trace+=a[i][i];
    printf("Trace of the Matrix is %d\n",trace);
    printf("Norm of the matrix is %f\n",norm);
    return 0;
}
