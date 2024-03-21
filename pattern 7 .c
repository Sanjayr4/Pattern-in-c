#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    for (int r=1;r<=n;r++)
    {
        for (int c=1;c<=n;c++)
        {
            if (r==c)
            {
                printf ("#");
                break;
            }
            else 
            {
                printf ("*");
            }
        }
        for (int k=1;k<=(n-r);k++)
        {
            printf ("-");
        }
        printf ("\n");
    }
}
/*
sample output
entered number = 4;

#---
*#--
**#-
***#
*/