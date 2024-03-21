#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int v = 1;
    for (int r=1;r<=n;r++)
    {
        for (int ctr = 1; ctr<=n-r; ctr++ )
        {
            printf ("* ");
        }
        for (int ctr = 1; ctr<=(r*2)-1; ctr++)
        {
            printf ("%d ",ctr);
        }
        printf ("\n");
    }
}
/* sample 
entered number = 4;
* * * 1
* * 1 2 3
* 1 2 3 4 5
1 2 3 4 5 6 7*/