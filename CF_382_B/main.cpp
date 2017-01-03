#include <iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
        int i,j=1,k,n1,n2,n,flag,mn,mx;
        double  sum=0,a[100000],tot=0;
        cin>>n>>n1>>n2;
        mn=min(n1,n2);

        mx=max(n1,n2);
        n1=mn;
        n2=mx;

        for(i=1;i<=n;i++)
            cin>>a[i];
            k=n1+n2;

        sort(a,a+(n+1));
      //  cout<<n1<<endl<<n2<<endl;



        for(i=n;i>=((n)-k);i--){


            if(j<=n1)
            {
              //  cout<<a[i]<<"   ";
                sum=(double)(sum+a[i]);
                 j=j+1;
            }
            else{
                sum=((double)sum) / (double)(j-1);
                break;
            }

        }
       // cout<<endl;

        j=1;

        for(i=(n)-k+1  ;i<=(n);i++){
           // cout<<a[i]<<" ";

            if(j<=n2)
            {
             //   cout<<a[i]<<"   ";
                tot=tot+a[i];
                 j=j+1;
            }
            else{
                tot=(double)tot/(double)(j-1);
                break;
            }


        }


    //tot=(double)5/2;


        //cout<<(float)sum;
        printf("%.8f",sum+tot);
       // printf("%f",tot);



    return 0;
}
