/*Input P, N and R to compute simple and compound interest.*/
#include<stdio.h>
#include <math.h>
int main(){
    int p,n;
    float r;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter principal\n");
    scanf("%d",&p);
    printf("Enter time (in years)\n");
    scanf("%d",&n);
    printf("Enter rate\n");
    scanf("%f",&r);
    float si=(p*n*r)/100;
    float ci=(p*pow((1+r/100),n))-p;
    printf("Simple interest is %f\n",si);
    printf("Compound Interest is %f\n",ci);
    return 0;
}
