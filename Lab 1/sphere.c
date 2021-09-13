//Input radius to find the volume and surface area of a sphere.
#include<stdio.h>
#include<math.h>
int main(){
    int radius;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter radius\n");
    scanf("%d",&radius);
    float area=4*3.14*pow(radius,2)*1.0;
    float vol=(4*3.14*pow(radius,3)*1.0)/3;
    printf("The surface area of the sphere is %f\n",area);
    printf("The surface area of the sphere is %f\n",vol);
    return 0;
}
