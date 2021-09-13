//Print all the prime numbers in a given 1D array.
#include<stdio.h>
#include<math.h>
int main(){
    printf("Anurag Chowdhury\n");
    int n,fl;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[100];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array is:\n");
    for(int i=0;i<n;i++)//Displaying orignal array
        printf("%d ",a[i]);
    printf("\nPrime numbers in the array are:\n");
    for(int i=0;i<n;i++){
            fl=1;
        for(int j=2;j<=sqrt(a[i]);j++){
            if(a[i]%j==0)
                fl=0;
        }
        if(fl==1)
            printf("%d\n",a[i]);
    }
    return 0;
}
