#include <iostream>
#include<cmath>
#define MAX 1000000
#define lli long long int
using namespace std;

bool v[MAX];
int len, sp[MAX];

void Sieve(lli  M){
	for (int i = 2; i < M; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (lli i = 3; i < M; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (lli j = i; (j*i) < M; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main(){
   lli n,m,i;
    cin>>n;
	Sieve(n+1);
       /* for ( i = 0; i <= n; i++)
                {
                    cout<<sp[i]<<"  ";
                }
                */
	if(sp[n]==n)
    {
        cout<<"1 "<<n;
    }
    else
    {
        m=sqrt(n);
        cout<<m;
                for ( i = m; i <= n; i++)
                {
                    if((i*m)==n)
                    {
                       cout <<" "<<i ;
                       break;
                    }
                }

    }


    return 0;
}
