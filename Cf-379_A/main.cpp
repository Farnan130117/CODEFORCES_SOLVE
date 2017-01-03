#include <iostream>
#include<cstring>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int i,j=0,k=0,m,n;
    char  s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s=='D')
        j=j+1;
        else
        k=k+1;

    }
    if(j<k)
        cout<<"Anton";
    else  if(j>k)
        cout<<"Danik";
    else
        cout<<"Friendship";


    return 0;
}
