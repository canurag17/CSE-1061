//Input a string and toggle the case of every character in the input string.
#include<stdio.h>
int main()
{
    printf("Anurag Chowdhury\n");
    char s[100];
    int i;
    printf("Enter string:\n");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z')
        s[i]+=32;
        else if(s[i]>='a'&&s[i]<='z')
        s[i]-=32;
    }
    printf("String after toggling:\n");
    puts(s);
    return 0;
}
