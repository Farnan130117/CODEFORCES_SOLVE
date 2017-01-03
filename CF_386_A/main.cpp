#include <iostream>

using namespace std;

int main()
{
    int a,b,c,mini;
    cin>>a>>b>>c;

    a=(a/1);
    b=(b/2);
    c=(c/4);
    mini=min(a,b);
    mini=min(mini,c);
    cout<<mini*7;


    return 0;
}
