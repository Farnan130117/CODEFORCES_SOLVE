/*
#include <iostream>
#include<cmath>
#define MAX 100000
#define lli long int
using namespace std;


int main(){
   lli n,m,i,k;
    cin>>n;
	//Sieve(n+1);
      /*  for ( i = 0; i <=n; i++)
                {
                    cout<<sp[i]<<"  ";
                }
                cout<<endl;
        for ( i = 0; i <=n; i++)
                {
                    cout<<cop[i]<<"  ";
                }
                */
                /*

                if(n%2==0)
                {
                    cout<<n/2<<endl;
                    for(k=1;k<=n/2;k++)
                    {
                        if(k!=n/2)
                            cout<<"2"<<" ";
                        else
                             cout<<"2";
                    }
                }
                else // if(n%3==0 &&  n%2!=0)
                {
                     cout<<(n-1)/2<<endl;

                    for(k=1;k<(n-1)/2;k++)
                    {
                       // if(k!=cop[n])
                            cout<<"2"<<" ";


                    }
                    cout<<"3";
                }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

	cout << "3" << endl;
	cout << x1 - (x2 - x3) << " " << y1 - (y2 - y3) << endl;
	cout << x2 - (x3 - x1) << " " << y2 - (y3 - y1) << endl;
	cout << x3 - (x1 - x2) << " " << y3 - (y1 - y2) << endl;


    return 0;
}
