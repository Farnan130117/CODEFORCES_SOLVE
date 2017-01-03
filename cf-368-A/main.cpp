#include <iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int X,Y;
    int i,j;
    int trap=0,treat=0,sesh=-2;
    char  read;
   cin>>X>>Y;

    for(i=1;i<=X;i++)
    {
        for(j=1;j<=Y;j++){
            cin>>read;

           if(read=='W'||read=='B'||read=='G')
                trap=trap+1;
            else if (read=='C'||read=='M'||read=='Y')
               treat=treat+1;
               else
                    sesh=0;

        }
    }

    if(trap==0)
         cout<<"#Color";

     if(treat==0)
       cout<<"#Black&White";

        if(sesh==0)
            return  0;

    return 0;
}
