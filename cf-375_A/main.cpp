#include <iostream>
#include<algorithm>


using namespace std;

int main()
{
    int i,j,k,a[5],n;

    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
        k=a[1]-a[0];
        j=a[2]-a[1];
        n=k+j;
        cout<<n;


    return 0;
}
