#include<stdio.h>
int main()
{
    int i,n;
    char letter;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        letter = i+ 96;
        printf("%c ", letter);
    }
    return 0;
}
