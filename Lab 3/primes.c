/*Write a program using do-while loop to read the numbers until -1 is encountered. Also
count the number of prime numbers and composite numbers entered by user. [Hint: 1
is neither prime nor composite]*/

#include<stdio.h>
#include<math.h>
int main(){
    int n,composite=0,prime=0;
    printf("Anurag Chowdhury\n");
    printf("Enter numbers repeatedly\nEnter -1 to stop\n");
    do{
        scanf("%d",&n);
        int i=2,fl=1;
        while(i<=sqrt(n)){
            if(n%i==0){
                fl=0;
                break;
            }
            i++;
        }
        if(fl==1 && n>1)
            prime++;
        else if(fl==0 && n>1)
            composite++;
    }
    while(n!=-1);
    printf("Number of primes is %d\n",prime);
    printf("Number of composites is %d\n",composite);
    return 0;
}
