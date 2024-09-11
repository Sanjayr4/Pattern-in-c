
#include <stdio.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int count = 1;
    for (int i = 1;i<=n;i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1;j<=i;j++)
            {
                printf ("%d ",count++);
            }
        }
            else 
            {
                int num;
                num = count + (i - 1);
                count = num;
                for (int k = 1; k <= i; k++)
                {
                    printf ("%d ",num--);
                }
                count+=1;
            }
        
        printf ("\n");
    }

    return 0;
}