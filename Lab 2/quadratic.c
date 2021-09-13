//Compute all the roots of a quadratic equation using switch case statement.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float x1,x2;
    printf("My name is Anurag Chowdhury\n");
    printf("Enter value of constants in ax^2+bx+c\n");
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Enter value of c\n");
    scanf("%d",&c);
    float d=pow(b,2)-4*a*c;
    int flag;
    if(d<0)
        flag=1;
    else if(d>0)
        flag=2;
    else
        flag=3;
    switch(flag){
        case 1:
            printf("No real roots");
            break;
        case 2:
            x1=((-b+pow(d,0.5))*1.0)/(2*a);
            x2=((-b-pow(d,0.5))*1.0)/(2*a);
            printf("Roots are real and unequal and values of x are %f and %f",x1,x2);
            break;
        case 3:
            x1=((-b*1.0)/(2*a));
            printf("Roots are real and equal and its value is %f",x1);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
