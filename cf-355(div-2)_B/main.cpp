/*#include <iostream>

using namespace std;

int main()
{
 long  long int n,h,k,m,i;
 long long  int sum=0,s=0,time=0,f,flag,total;
 cin>>n>>h>>k;
 /*
 for(i=1;i<=n;i++)
 {
     cin>>m;
     if((m<=h    &&  m>=k )   || ( (s+m)>=k  &&  (s+m)<=h))
     {
         m=s+m;
         s=0;
         if(    sum+m   <=  h)
         {
             flag=m%k;
             f=m/k;
             sum=sum+flag;
             time=time+f;
         }
         else   if((s+m)>h)
         {
             m=s+m;
             time=time+(m/k);
             flag=m%k;
             if(flag!=0)
                time=time+1;
         }
         else
         {
             sum=0;
             flag=m%k;
             f=m/k;
             sum=sum+flag;
             time=time+1+f;

         }
         //cout<<time<<"..."<<endl;
     }
     else
       {

            s=s+m;
            total=1;
       }
 }
 if(sum!=0  ||    total==1)
    time=time+1;
 cout<<time<<endl;


 for(i=1;i<=n;i++)
 {
     cin>>m;
     if((m>=k   &&  m<=h))
     {
         flag=m%k;
         time=time+(m/k);
         if(flag!=0)
         {
             time=time+1;
         }

     }
     else
     {
         if((s+m)>=k)
         {

            if((s+m)<=h)
               {

                    s=s+m;
                    flag=s%k;
                    time=time+(s/k);
                    if(flag!=0)
                        time=time+1;
                    s=0;

               }
            else
            {
                flag=s%k;
                time=time+(s/k);
                if(flag!=0)
                    time=time+1;
                s=m;

            }
         }
         else
            s=s+m;
     }
 }
 if(s!=0)
    time=time+1;
 cout<<time<<endl;

    return 0;
}
*/
#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
ll i,n,h,ans,x,cur_h,k;
int main()
{
	cin >> n >> h >> k;
	ans = 0;
	cur_h = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%I64d", &x);
		if (cur_h + x <= h)
		   cur_h += x;
		else
			ans++, cur_h = x;
		ans += cur_h/k;
		cur_h %= k;
	}
	ans += cur_h/k;
	cur_h %= k;
	ans += (cur_h>0);
	cout << ans << endl;
	return 0;
}

