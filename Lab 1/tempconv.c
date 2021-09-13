//Convert the given temperature in Fahrenheit to Centigrade
#include<stdio.h>
int main(){
    int ftemp;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter temperature in Fahrenheit\n");
    scanf("%d",&ftemp);
    float c=(5*1.0/9)*(ftemp-32);
    printf("Temperature in Celsius is %f",c);
    return 0;
}
