
#include <iostream>

using namespace std;

int main()
{
   long long  int  n,m,i,j,k,sum=0,flag,result=0,a[100000];

   cin>>n;
   cin>>m;
   cin>>j;
   if(n>=1  &&   1<=m   && m<=j){
    for(i=1;i<=n;i++)
   {
       cin>>k;
       if(k>=1  &&  k<=m  )
       {
         sum=sum+k;
         if(sum>j)
         {
             sum=0;
             result=result+1;

         }
       }
       else
        continue;
   }
   cout<<result;
   }




    return 0;
}

