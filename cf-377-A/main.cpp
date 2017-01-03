#include <iostream>
#include<algorithm>
#include<map>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{

    int k,r,sum;
    int i,j;
    cin>>k>>r;
    for(i=1;;i++)
    {
        sum=k*i;
        if(sum%10==0)
        {
            cout<<sum/k;
            break;
        }
        //sum=15-r;
        if((sum-r)%10==0)
        {
            cout<<sum/k;
            break;
        }
    }


    return 0;
}
