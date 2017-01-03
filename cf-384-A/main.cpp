#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include<set>
#define Max 20000
using namespace std;

int main()
{

    int i,j,n,A,B,maxx,minn;
    char a[100008];

    cin>>n>>A>>B;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];

    }

    maxx=max(A,B);
    minn=min(A,B);

    if(a[maxx]==a[minn])    cout<<"0";
    else    cout<<"1";
       

        

        
    }










    return 0;
}
