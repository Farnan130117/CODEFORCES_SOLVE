#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int i=1,v,m=1,maximum=1,length,Box[100000];

    scanf("%d",&length);
    for(v=1;v<=length;v++)
        cin>>Box[v];
    for(v=2;v<=length;v++){
        if(Box[v]>Box[m]){i=i+1;m=m+1;}
        else{
            if(i>maximum)
                maximum=i;
            m=v;
            i=1;
        }
    }

    if(maximum<i)   maximum=i;
    cout<<maximum<<endl;

    return 0;
}
