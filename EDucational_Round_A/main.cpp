//A
/*#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    long  long int n,k,i,m,flag,temp;
    cin>>n>>k;
    if(n>k)
       {

            m=n%k;
          //  cout<<m<<endl;
            temp=k-m;
            flag=n+temp;
       }
    else   if(n==k)
    {
        flag=k*2;
    }
    else
    {
        flag=k;
    }
        cout<<flag<<endl;



    return 0;
}
*/
//C
/*#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define FOR(i,a,b) for(int i=(a); i<=(b); ++i)
#define rep(i,n) FOR(i,0,n-1)
#define rep1(i,n) FOR(i,1,n)

const int mod=1e9+7;
const int cmx=1e5+5;

ll lcm(ll a, ll b){
	ll g=__gcd(a,b);
	a/=g;
	return a*b;
}

int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll n,a,b,p,q;
cin>>n>>a>>b>>p>>q;
ll c1=n/a;
ll c2=n/b;
ll c3=n/lcm(a,b);
ll ans=(c1-c3)*p+(c2-c3)*q+c3*max(p,q);
cout<<ans<<'\n';
return 0;
}
*/
//B

#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

#define fill(a,val) memset(a , (val) , sizeof a)
#define pb push_back
int leap(int a)
{
    if(a%400==0)
    {
        return 1;
    }
        else
       {
           if(a%4==0 && a%100!=0)
            return 1;
           else
            return 0;
       }
}
int main(void)
{
  int y,z=0;
  cin>>y;
  int r=leap(y);
  int x=1;
   do
  {
      if(y%400==0)
      {
          x=x+2;
      }
      else
      {
          if(y%4==0 && y%100!=0)
            x=x+2;
            else
                x++;
      }
      x=x%7;
      y++;
      if(x==1 && leap(y)==r)
        z=1;
  }
  while(leap(y)!=r || z==0);
  cout<<y<<endl;
  return 0;
}
