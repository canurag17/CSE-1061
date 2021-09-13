//Arrange ‘n’ names in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Anurag Chowdhury\n");
    char a[10][10],temp[10];
    int n,i,j;
    printf("Enter no. of names\n");
    scanf("%d",&n);
    printf("Enter the names:\n");
    fflush(stdin);
    for(i=0;i<n;i++)
    gets(a[i]);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
        if(strcmp(a[i],a[j])>0){
            strcpy(temp,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],temp);
            }
        }
    }
    printf("The names in alphabetical order are:\n");
    for(i=0;i<n;i++){
        puts(a[i]);
    }
}
