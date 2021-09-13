#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    int a[100],n,pos,ele,t;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nEntered array is\n");
    for(int i=0;i<n;i++)//Displaying orignal array
    printf("%d ",a[i]);
    printf("\nEnter element\n");
    scanf("%d",&ele);
    printf("Enter position you want to insert\n");
    scanf("%d",&pos);
    int ind=pos-1;
    for(int i=n;i>ind;i--){
        a[i]=a[i-1];
    }
    a[ind]=ele;
    printf("Array after inserting\n");
    for(int i=0;i<=n;i++)
    printf("%d ",a[i]);
}
