/*Evaluate the sine series, sin(x)= x- x3/3! + x5/5!–x7/7!+ ……… to n terms.*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    float x;
    printf("Anurag Chowdhury\n");
    printf("Enter value of x in degrees \n");
    scanf("%f",&x);
    printf("Enter value of n \n");
    scanf("%d",&n);
    x=x*(3.1416/180.0); //converting to radians
    float t=x;
    float sine=x;
    for(int i=1;i<=n;i++){
      t=(-1*t*pow(x,2))/(2*i*(2*i+1));
      sine=sine+t;
    }
    printf("Result after evaluation of sine series is %f",sine);
    return 0;
}
