# include <bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
#define pll pair<ll, ll>

#define pb push_back
#define eb emplace_back
#define mp make_pair

#define fi first
#define se second

#define y0 asjdlksajldjals
#define y1 ajsldjalksdkjlk

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int inf = (int)1e9 + 7;
const int maxn = (int)6e5 + 7;
const int lmaxn = (int)6e6 + 7;
const ll linf = (ll)1e16 + 7;

const ld eps = ld(1e-11);

const ll dx[] = {-1, 0, 0, 1};
const ll dy[] = {0, -1, 1, 0};

ll gcd(ll a, ll b){
    while(b) a %= b, swap(a, b);
    return a | b;
}

ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

ll n, k;
ll ans;
ll a[maxn];

int main(){
    cin>>n>>k;
    for(ll i = 1; i <= n; ++i)
       cin>>a[i];
    for(ll i = 1; i + 1 <= n; ++i){
        if(a[i] + a[i + 1] >= k)
            continue;
        ans += (k - (a[i] + a[i + 1]));
        a[i + 1] += k - (a[i] + a[i + 1]);
    }
   cout<<ans<<endl;
    for(ll i = 1; i <= n; ++i)
       cout<<a[i]<<" ";

    return 0;
}
