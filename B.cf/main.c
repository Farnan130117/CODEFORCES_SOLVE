#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,k,i,j,temp=0,flag=0,sub,res;
    long long int a[100004];
    scanf("%I64d%I64d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(j=1;j<=n;j++)
    {

        temp=((j*(j-1))/2)+1;
        if(temp<=k)
        {
         flag=temp;

          sub=k-flag;

        }
        else
        {
            break;
        }

    }

printf("%d\n",a[1+sub]);

    return 0;
}
