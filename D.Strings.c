#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100],b[100],temp1[100],temp2[100],temp[100];
    scanf ("%s",a);
    scanf ("%s",b);
    int c=strlen(a),d=strlen(b);
    printf ("%d %d\n",c,d);
    strcpy(temp1,a);
    strcpy(temp2,b);
    strcat(temp1,temp2);
    printf ("%s\n",temp1);
 
    temp[0] = a[0];
    a[0]=b[0];
    b[0]=temp[0];
    printf ("%s %s\n",a,b);
}
