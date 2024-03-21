#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    getchar();
    char ch;
    scanf ("%c",&ch);
    for (int r=1;r<=n;r++)
    {
        for (int c=1;c<=n;c++)
        {
            if (c == 1 || c == n || c==r)
            {
                printf ("%c",ch);
               
            }
            else 
            {
                printf ("-");
            }
        }
        printf ("\n");
    }
}
/* sample
eneterd number = 5 *

*---*
**--*
*-*-*
*--**
*---*
*/