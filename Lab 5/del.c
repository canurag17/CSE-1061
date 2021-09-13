/*Search the position of the number that is
entered by the user and delete that number from the
array and display the resultant array elements.*/
#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    printf("Enter no. of elements\n");
    int n,a[100];
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter element to be deleted\n");
    int ele,pos=-1;
    scanf("%d",&ele);
    for(int i=0;i<n;i++){
        if(a[i]==ele){
            pos=i;
            break;
        }
    }
    if(pos==-1)
        printf("Element not found in entered array\n");
    else{
        printf("Element found at index %d\n",pos);
        for(int i=pos;i<n-1;i++){
            a[i]=a[i+1];
        }
        printf("Array after deletion\n");
        for(int i=0;i<n-1;i++){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
