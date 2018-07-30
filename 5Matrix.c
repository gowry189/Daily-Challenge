#include <stdio.h>
int main()
{
    int i;
    int j;
    int a[5][5];
    int ans=0;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            {
                scanf("%d",  &a[i][j] );
            }
    }
    for (i = 1; i <= 5; i++)
    {
      for (j = 1; j <= 5; j++)
        {   if(a[i][j]==1)
           ans = abs(i-3) + abs(j-3);
        }
    }
    printf("%d",ans);
return 0;
} 
