#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int f(int m, int k)
{
    int r = m;
    r =r+ (m/k)*5;
    return r;
}

int main()
{
    int i,j=0,n,k,flag=0,worse=0,length,b[105],ra,rb,rp;
    string a[105],goal;
    cin>>n;
    cin>>k;

    for(i=0;i<n;i++)
    {
       cin>>a[i];

       b[i]=a[i].length();

    }
        cin >> goal;
           length=goal.length();
    if(n==1 )
    {
        cout<<"1 1";
        return 0;
    }

        sort(b,b+n);

      if(b[0]==b[n-1])
           {

               cout <<"1 ";

           }
      else
         {
                     //for best case

                         for(i=0;i<n;i++)
                          {
                              //cout<<b[i]<<endl;

                              if(b[i]==length)
                              {

                                    flag=i;

                                  break;
                              }
                          }








                    //for_worse_case

                     for(i=n-1;i>=0;i--)
                          {
                              //cout<<b[i]<<endl;

                              if(b[i]==length)
                              {

                                  worse=i;


                                  break;
                              }
                          }

                    flag = f(flag, k) + 1;
                    worse = f(worse, k) + 1;
                    cout<<flag<<" "<<worse;



         }


    //for worse case
    if(b[0]==b[n-1])
        {
               rp = f(n-1, k)+1 ;
               cout<<rp;

    }
    return 0;
}
