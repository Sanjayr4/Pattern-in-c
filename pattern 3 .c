#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int val=n;
    for (int i=1;i<=n;i++)
    {
        int diff = (i%2!=0)?2:3;
        for (int j=1;j<=n;j++)
        {
            printf ("%d ",val);
            val+=diff;
        }
        (i%2!=0)?val++:val--;
        printf ("\n");
    }
}