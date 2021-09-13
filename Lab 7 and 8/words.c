//Count the number of words in a sentence
#include <stdio.h>
int main()
{
    printf("Anurag Chowdhury\n");
    char sent[100];
    int i=0,count=1;
    printf("Enter sentence\n");
    gets(sent);
    while(sent[i]!='\0'){
        if (sent[i]==' ' && sent[i+1]!= ' ')
        count++;
        i ++;
    }
    printf("No. of words in the sentence is %d", count);
    return 0;
}
