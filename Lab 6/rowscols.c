// Interchange rows and columns in a matrix
#include <stdio.h>
int main()
{
    printf("Anurag Chowdhury\n");
    int n,m,r1,r2,c1,c2;
    printf("Enter no. of rows\n");
    scanf("%d",&n);
    printf("Enter no. of columns\n");
    scanf("%d",&m);
    int a[10][10];
    printf("Enter Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Original matrix is: \n");
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter row you want to interchange.: \n");
    scanf("%d",&r1);
    printf("Enter row to be interchanged with\n");
    scanf("%d",&r2);
    for(int i=0;i<n;i++){
        int c=a[r1-1][i];
        a[r1-1][i]=a[r2-1][i];
        a[r2-1][i]=c;
    }
    printf("Enter column you want to interchange:\n");
    scanf("%d",&c1);
    printf("Enter column to interchange :\n");
    scanf("%d",&c2);
    for (int i=0;i<m;i++){
        int r=a[i][c1-1];
        a[i][c1-1]=a[i][c2-1];
        a[i][c2-1]=r;
    }
    printf("New matrix is:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
