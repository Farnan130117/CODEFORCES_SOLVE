#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    while( scanf("%d%d",&m,&n)==2 )
    {
        if(m%2==0)
        {
            printf("%d\n",(m/2)*n);
        }
        else
        {
            printf("%d\n",(((m/2)*n)+n/2));
        }
    }

    return 0;
}
