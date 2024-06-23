#include<stdio.h>
#include<string.h>
int main ()
{
    char s[1000001];
    int i,count=0;
    gets(s);
    for (i=0;i<strlen(s);i++)
    {
        if (s[i]==' ')
        {
            count++;
        }
    }
    printf ("%d\n",count+1);
    return 0;
}
