#include<stdio.h>
#include<string.h>
int main ()
{
    char s[1000000];
    int sum=0,i;
    scanf ("%s",s);
    for (i=0;i<strlen(s);i++)
    {
        sum = sum + s[i]-48;
    }
    printf ("%d\n",sum);
    return 0;
}
