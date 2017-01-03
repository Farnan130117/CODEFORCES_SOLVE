#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
   long long  int i,j,temp,sum=0,k=0,p=0, a[5];
     long long  int b[5];
      for(i=0;i<=4;i++)
    {

        cin>>a[i];
        if(a[i]<1 ||  a[i]>100)
            k=1;


    }
    if(k==1)
        return 0;

   sort(a,a+5);


   if(a[4]==a[3])
       {

        if(a[2]==a[1] )
            if(a[1]==a[0])
                {
                    a[0]=0;
                    a[1]=0;
                    a[2]=0;
                    sum=a[4]+a[3];
                    cout<<sum<<endl;
                    return 0;
                }
       }
    else{


  /* for(i=0;i<=4;i++)
   {
       temp=a[i];
       for(j=0;j<=4;j++)
       {
           if(a[j]==temp)
                p=p+1;
       }
       b[i]=p;
       p=0;
   }*/
    j=3;


 for(i=4;i>=0;i--)
    {

       if(i>=1)
        if(a[j]==a[i])
           {
               if(i>=2)
                if(a[j]==a[j-1])
                    a[j-1]=0;
            a[j]=0;
            a[i]=0;
            break;
           }
        else
        {
            j=j-1;
        }
    }

//cout<<"............."<<endl;
   for(i=0;i<=4;i++)
    {
       sum=sum+a[i];

    }
    cout<<sum<<endl;
    }
    return 0;
}
