#include<stdio.h>
int main()
{
    int arr[100],n,i,pos,val;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&val);
    for(i=0; i<n; i++)
    {
        if(arr[i]==val)
        {
            printf("%d is found at position %d\n",val,i+1);
            break;
        }
        if(i>n)
            printf("%d is not found in that array\n");
    }
    return 0;
}
