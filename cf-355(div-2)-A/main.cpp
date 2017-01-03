#include <iostream>

using namespace std;

int main()
{
    int n,h,temp=0,i,k;
    cin>>n>>h;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        if(k<=h)
            temp=temp+1;
        else{
                if(k<=2*h)
                    temp=temp+2;
        }

    }
    cout<<temp<<endl;
    return 0;
}
