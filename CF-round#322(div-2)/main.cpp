//Problem-A
/*#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    cout<<min(a,b);
    c=max(a,b);
    if(a>b)
    c=(a-b)/2;
    else
        c=(b-a)/2;
    cout<<" "<<c<<endl;
    return 0;
}
*/
//problem:D

/*#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef long double ld;
typedef map<ll,ll>::iterator mapit;
typedef set<int>::iterator setit;
const int maxn = 100+4;
const ll inf=1e18;
const int mod=1e9+7;
int x[3] , y[3];
char c[3];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.precision(20);cout.tie(0);
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
    int s = x[0] * y[0] + x[1] * y[1] + x[2] * y[2];
    c[0] = 'A' , c[1] = 'B' , c[2] = 'C';
    int l = sqrt(s);
    if(l * l !=s)
    {
        cout << -1;
        return 0;
    }
    for(int i=0;i<3;i++)
        if(x[i] > l || y[i] > l)
        {
            cout << -1;
            return 0;
        }
    vector<int> v;
    for(int i=0;i<3;i++)
    {
        if(y[i] == l)
            swap(x[i],y[i]);
        if(x[i] == l)
            v.pb(i);
    }
    if(v.size() == 3)
    {
        cout << l << endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<y[i];j++)
            {
                for(int k=0;k<l;k++)
                    cout << c[i] ;
                cout << endl;
            }
        }
        return 0;
    }
    if(v.size() == 1)
    {
        int cur = y[v[0]];
        int le = l - cur;
        int co = 0;
        for(int i=0;i<3;i++)
        {
            if(i != v[0])
            {
                if(y[i] == le)
                    swap(x[i] , y[i]);
                if(x[i] == le)
                    co ++;
            }
        }
        if(co == 2)
        {
            cout << l << endl;
            for(int i=0;i<cur;i++)
            {
                for(int j=0;j<l;j++)
                    cout << c[v[0]];
                cout << endl;
            }
            int o1 = (v[0] + 1) % 3;
            int o2 = (o1 + 1) % 3;
            for(int i=0;i<le;i++)
            {
                for(int j=0;j<y[o1];j++)
                    cout << c[o1];
                for(int j=0;j<y[o2];j++)
                    cout << c[o2];
                cout << endl;
            }
            return 0;
        }
    }
    cout << -1 ;
    return 0;
}
*/

//problem:B

#include<cstdio>
#include<iostream>
using namespace std;
#define MAXN 100005
int a[MAXN], n, ans[MAXN];
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
        scanf("%d", &a[i]);

    for(int i = n; i > 0; i --)
        ans[i] = max(ans[i+1], a[i+1]);

    for(int i = 1; i <= n; i ++)
        printf("%d ", (ans[i] < a[i]) ? 0 : ans[i] - a[i] + 1);
    return 0;
}
