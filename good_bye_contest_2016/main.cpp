#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    string  str,e="East",w="West",n="North",s="South",ara[10];
    long    long   int i,j,k,m,add=0,sub=0,flag=0,lol;
    cin>>m;
    int a[10];
    for(i=1;i<=m;i++)
    {
        cin>>k;
        cin>>str;
        if(add<20000)
        {

        if(i==1)
        {
            if(str==s)
            {
                add=add+k;

            }
            else
            {
                flag=1;
            }

        }
        else   if(i==m)
        {
            if(str==n)
                {
                    add=add-k;
                    if(flag!=1)
                        flag=0;
                }
            else
            {
                flag=1;
            }
        }
        else
        {
            if(str!=e  &&   str!=w)
            {
                if(str==s)
                {
                    add=add+k;
                }
                if(str==n)
                {
                    add=add-k;
                }
            }
        }
    }
    else
    {
        if(add==20000)
          {

            if(str==n)
                    add=add-k;
            else
                flag=1;
          }
       else
            flag=1;
    }
    if(add<0)
        flag=1;
    }


    if(flag==0)
    {

      //printf("%d\n",add);
      if(add==0)
        printf("YES");
    else
        printf("NO");

    }
    else
        printf("NO");



    return 0;
}

//solve_A
/*
int main()
{
    int n,k,sum=0;
    int i,j;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        sum=sum+5*i;
        if(i==1)
            sum=sum+k;
        if(sum<=240)
        {

            if(i==n)
                printf("%d",i);

            continue;
        }
        else
        {
            printf("%d",i-1);
            break;
        }
    }
}
*/