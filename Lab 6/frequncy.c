//Search for an element in a given matrix and count the number of its occurrences.
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
    printf("Enter an element to find the no. of its occurences in the matrix\n");
    int ele,freq=0;
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==ele)
                freq++;
        }
    }
    printf("%d occurs %d times",ele,freq);
    return 0;
}
