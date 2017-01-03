#include <iostream>
#include<cstdio>
#include<algorithm>

using namespace std;






/* this function calculates (a*b)%c taking into account that a*b might overflow */
unsigned long long mulmod(unsigned long long a,unsigned long long b,unsigned long long c){
            unsigned long long x = 0,y=a%c;
            while(b > 0){
            if(b%2 == 1){
            x = (x+y)%c;
            }
            y = (y*2)%c;
            b /= 2;
            }
            return x%c;
    }

/* This function calculates (ab)%c */
    unsigned long long modulo(unsigned long long a,unsigned long long b,unsigned long long c){
           unsigned long long x=1,y=a; // long long is taken to avoid overflow of intermediate results
            while(b > 0){
            if(b%2 == 1){
           // x=(x*y)%c;
           x = mulmod(x,y,c);
            }
            //y = (y*y)%c; // squaring the base
            y = mulmod(y,y,c);
            b /= 2;
            }
            return x%c;
    }



int main()
{
    unsigned long long a,b,c;
    int t,i,j;


        a=1378;
        c=10;

    cin>>b;



    cout<<modulo(a,b,c);

    return 0;
}


