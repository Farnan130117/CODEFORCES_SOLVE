#include<iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;



void tostring(char [], int);


int main()
{
    int i,n ;
    char string[10000],str[10000]="";

    cin>>n;
    for(i=1;i<=n;i++){
    sprintf(string,"%d", i);
    strcat(str,string);
    }
    cout<<str[n-1]<<endl;
//    cout<<string[]
    return 0;
}

