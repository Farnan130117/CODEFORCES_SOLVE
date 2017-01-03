#include <iostream>

using namespace std;

int main()
{
    int i,j,k,N,hold=0,m,n,t;
    cin>>N;
    int a[100][3];
    if(N==1)
    {
        cin>>m>>n;
       cout<<hold;
       return   0;
    }
    for(i=1;i<=N;i++)
    {

            cin>>m>>n;
            if(m>n)
            {
               t=m;
               m=n;
               n=t;
               hold=i;

                a[i][1]=m;
                a[i][2]=n;

            }
            else
            {
                a[i][1]=m;
                a[i][2]=n;
            }

    }
    cout<<hold;
    return 0;
}
