#include <iostream>

using namespace std;

int main()
{

    //farnan_cse_pust

    long    long    int i,j,n,m,s,tot=0,lol,a,b,c,d;


    cin>>a>>b>>c>>d;

    s=min(a,c);
    s=min(s,d);

    tot=256*s;

    c=c-s;
    d=d-s;
    a=a-s;



    lol=min(a,b);
    lol=32*lol;
    tot=tot+lol;


    cout<<tot;

    return 0;
}
