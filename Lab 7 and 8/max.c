/*4.Write a function Largest to find the maximum of a given
list of numbers. Also write a main program to read N numbers
and find the largest among them using this function.*/
#include<stdio.h>
int Largest(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int main(){
    int n;
    printf("Anurag Chowdhury\n");
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered numbers are\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nMaximum of these %d numbers is %d",n,Largest(a,n));
    return 0;
}
