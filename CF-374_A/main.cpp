#include <iostream>

using namespace std;

int main()
{
    char check,pre;
    int n,i,j,flag=0,track=0,k=1,sum=0;

    int a[105]={0};

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>check;

        if(check=='B')
        {
           flag=flag+1;

           if(i==n)
           {
               a[k]=flag;
               k++;
           }
        }
        else
        {
            if(flag!=0)
            {
                a[k]=flag;

                k++;
                flag=0;
            }
        }



    }
    cout<<k-1;
    if(k!=0)
    {
        cout<<endl;

        for(i=1;i<k;i++)
        {
            cout<<a[i]<<" ";
        }
    }


    return 0;
}
