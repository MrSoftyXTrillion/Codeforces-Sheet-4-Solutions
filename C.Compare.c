#include<stdio.h>
#include<string.h>
int main ()
{
    char x[50],y[50];
    gets(x);
    gets(y);
    int c;
    c = strcmp (x,y);
    if (c<0)
    {
        printf ("%s\n",x);
    }
    else if (c>0)
    {
        printf ("%s\n",y);
    }
    else if (c==0)
    {
        printf ("%s\n",x);
    }
    return 0;
}
