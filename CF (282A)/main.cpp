#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,c=0;
    cin>>x;
    string arr;
    for(int i=0;i<x;i++)
    {
        cin>>arr;
        if(arr[0]=='+' || arr[1]=='+')
            c++;
        else if(arr[0]=='-' || arr[1]=='-')
            c--;
    }
    cout<<c<<endl;
    return 0;
}
