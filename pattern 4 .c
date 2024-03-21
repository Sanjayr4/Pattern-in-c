#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int N=n,I=1;
    for (int i=1;i<=n;i++)
    {
        int val = (i%2!=0?I++:N--);
        for (int j=1;j<=n;j++)
        {
         printf ("%d ",val);
        }
        printf ("\n");
    }
}
