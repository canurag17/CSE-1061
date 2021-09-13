#include<stdio.h>
int main(){
    printf("Anurag Chowdhury\n");
    int a[10],n,temp;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Entered array is\n");
    for(int i=0;i<n;i++)//Displaying orignal array
    printf("%d ",a[i]);
    printf("\n Choose the order of sorting by entering respective character\na.Ascending order\nd.Descending order\n");
    char choice;
    scanf(" %c",&choice);
    switch(choice){
        case 'a':
            for(int i=0;i<n-1;i++){//Sorting
                for(int j=0;j<n-i-1;j++){
                    if(a[j]>a[j+1]){
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            break;
        case 'd':
            for(int i=0;i<n-1;i++){//Sorting
                for(int j=0;j<n-i-1;j++){
                    if(a[j]<a[j+1]){
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            break;
        default:
            printf("Invalid choice");
    }
    printf("\nArray after sorting according to %c option\n",choice);
    //Display
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
