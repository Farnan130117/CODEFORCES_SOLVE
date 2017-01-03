#include <iostream>
#include <string>
#include<cstdio>
using namespace std;

int main()
{
    string  a,b;
    long  int n,i,j,found=-1,sum=0,tot=0;
    cin>>n;
    //getchar();
    cin>>b;

    if((b[0]=='>')  &&  (b[n-1]=='<'))
    {
        cout<<"0";
        return  0;
    }
    if(b[0]=='<')
    {
        sum=1;
        for(i=1;i<n;i++)
        {
            if(b[0]==b[i])
            {
                sum=sum+1;
            }
            else
                break;
        }
    }

    if(b[n-1]=='>')
    {
        tot=1;
        for(i=n-2;i>=0;i--)
        {
            if(b[n-1]==b[i])
            {
                tot=tot+1;
            }
            else
                break;
        }
    }


    cout<<sum+tot;

   /* if((b.size())==n){
            if(b[0]!=n[n-1])
                {cout<<"0"; return  0;}
    found=b.find(c);
    //b.erase(found,2);
   // cout<<found;

    while(found!=-1){


                found=b.find(c);
                if(found==-1)
                {
                    break;
                }
                b.erase(found,2);

               // cout<<found<<endl;
                //cout<<b<<endl;



    }

//cout<<b<<endl;
cout<<b.size();
    }
    */
    return 0;
}
