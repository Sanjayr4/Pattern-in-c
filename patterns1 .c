#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for (int col=1;col<=i;col++)
        {
            printf ("%d",col);
        }
        for (int hyp=1;hyp<=n-i;hyp++)
        {
            printf ("-");
        }
        for (int col=i;col>=1;col--)
        {
            printf ("%d",col);
        }
        printf ("\n");
    }
}