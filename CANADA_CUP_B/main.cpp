#include <iostream>

using namespace std;
int fun(char  s)
{
    if(s=='f')  return  1;
     if(s=='e')  return  2;
      if(s=='d')  return  3;
       if(s=='a')  return  4;
        if(s=='b')  return  5;
         if(s=='c')  return  6;

}

int main()
{
   long long  int   i,j,n,temp,lol=1,hold,total;
   char c;
   cin>>n>>c;
  // cout<<n<<endl;
  // cout<<c<<endl;
   j=fun(c);
   long long    int a[n+10],b[n+10];

   a[1]=1;
   a[2]=2;
   temp=a[1];
   for(i=3;i<=n;i=i+2)
   {
       a[i]=temp+4;
       a[i+1]=(temp+1)+4;
       if(a[i]==n){ hold=i; lol=0;  break;}
       if(a[i+1]==n){hold=i+1;lol=0;    break;}
       temp=a[i];
       hold=n;
   }
 /*  for(i=1;i<=hold;i++)
   {
       cout<<a[i]<<" ";
   }
   */
 //  cout<<endl<<hold<<endl;

  if(lol==0)
  {
      total=((hold-1)*7)+(n-hold)+j;
      cout<<total;
      return    0;
  }
    b[1]=3;
   b[2]=4;
   temp=b[1];
   for(i=3;i<=n;i=i+2)
   {
       b[i]=temp+4;
       b[i+1]=(temp+1)+4;
       if(b[i]==n){ hold=i; lol=2;break;}
       if(b[i+1]==n){hold=i+1;lol=2;break;}
       temp=b[i];
       hold=n;
   }

  /* for(i=1;i<=hold;i++)
   {
       cout<<b[i]<<" ";
   }
   */
      cout<<endl<<hold<<endl;
    if(lol==2)
  {
      total=((hold-1)*7)+(n-hold)+j;
      cout<<total;
      return    0;
  }

    return 0;
}
