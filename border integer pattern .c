#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int v = 1; // value which means the integer;
    for (int i=1;i<=n;i++) // for rows
    {
        for (int j=1;j<=n;j++) // for columns
        {
            if (i == 1 || i == n || j == 1 || j == n )
            {
                printf ("%d ",v++);
            }
            else
            {
                printf("* ");
            }
        }
        printf ("\n");
    }
}
/* sample output
entered digit = 4;

1 2 3 4
5 * * 6
7 * * 8
9 10 11 12*/