#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    char ch = 'a';
    for (int r=1;r<=n;r++)
    {
        for (int c=1;c<=n-r;c++)
        {
            printf ("-");
        }
        for (int ap =1; ap<=r;ap++)
        {
            printf ("%c",ch--);
        }
        ch = ch+(r+1);
        printf ("\n");
    }
}
/*
smaple 
enter 5;
----a
---ba
--cba
-dcba
edcba
*/\