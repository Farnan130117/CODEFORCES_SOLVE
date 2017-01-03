#include <iostream>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    string  present="I hate it" ,   past_h="I hate that ";
    string  present_h="I love it",  past_l="I love that ";
    int n,i,j;
    cin>>n;
    if(n==1)
            cout<<present;
    else    if(n==2){
            cout<<past_h;
            cout<<present_h;
                }
    else{
    for(i=1;i<=(n-1);i++)
    {
        if(i%2)
            cout<<past_h;
        else
            cout<<past_l;
    }

    if(n%2=0)
        cout<<present;
    else
        cout<<present_h;
    }

    return 0;
}
