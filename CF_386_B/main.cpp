#include <iostream>
#include<cstring>

using namespace std;

int main()
{

   int  n,i,j;
   char s[2010],cop[2010];
   int  flag,mid,left,right;
   cin>>n;
   flag=n;
   for(i=1;i<=n;i++)
   {
       cin>>s[i];
       if(i==1)
       {


               if(flag%2==0)
               {
                   cop[n/2]=s[i];
                   flag=flag-1;
                   mid=n/2;
               }
               else
               {
                   cop[(n/2)+1]=s[i];
                   flag=flag-1;
                   mid=(n/2)+1;
               }
               left=mid;
               right=mid;
       }
       else
        {
            if(flag%2==0)
            {
                left=left-1;
                cop[left]=s[i];
                flag=flag-1;
            }
            else
            {
                right=right+1;
                cop[right]=s[i];
                flag=flag-1;

            }

        }


   }
    for(i=1;i<=n;i++)
   {
       cout<<cop[i];
   }
    return 0;
}
