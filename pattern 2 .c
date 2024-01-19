#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,r;
    scanf ("%d %d",&n,&r);
    for (int i=1;i<=r;i++)
    {
        for (int col=n;col<=i;col*=i)
        {
            printf ("%d ",col);
        }
        printf ("\n");
    }
}