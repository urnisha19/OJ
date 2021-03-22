#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    gets(st);
    int i,length,N=1,flag;
    length=strlen(st);
    for(i=0; i<length; i++)
        N*=st[i];
    flag=strcmp(st,N);
    if(flag==0)
        printf("%d\n",N);
    return 0;
}
