/*Write a C program to display the size of the data type int, char, float, double, long
int and long double using size of ( ) operator.*/
#include<stdio.h>
int main(){
    printf("My name is Anurag Chowdhury\n");
    printf("Size of int is %d bytes\n",sizeof(int));
    printf("Size of char is %d byte\n",sizeof(char));
    printf("Size of float is %d bytes\n",sizeof(float));
    printf("Size of double is %d bytes\n",sizeof(double));
    printf("Size of long int is %d bytes\n",sizeof(long int));
    printf("Size of long double is %d bytes\n",sizeof(long double));
    return 0;
}
