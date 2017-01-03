#include <iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n,n1,n2,i,flag=1,j=0;
    string  s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        cin>>n1;
        cin>>n2;
        if(n1>=-4000 &&  n2>=-4000   &&  n1<=4000    &&  n2<=4000)
        if(n1>=2400)
        {
            if(n2>n1)
                {

                    j=1;
                }

        }


    }
    if(j==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
