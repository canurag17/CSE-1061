//Find the largest and smallest element in a 1D array
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    printf("Enter number of elements\n");
    int n;
    scanf("%d",&n);
    int a[100];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered Array is:\n");
    for(int i=0;i<n;i++)//Displaying orignal array
    printf("%d ",a[i]);
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    printf("\nSmallest element in array is %d\nLargest element in array is %d",min,max);
    return 0;
}
