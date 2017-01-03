#include <iostream>
#include<cstring>
#include<string>
#include<cstdio>

using namespace std;
int isvowel(char c)
{
  int t=1 ;

  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'  || c == 'Y')
    return  t;
    return  0;


}

int main()
{
    int i,max=0,prev=-1,counter;
    string  a;
    cin>>a;

    for(i=0;i<a.size();i++)
    {
        if( isvowel(a[i]))
        {
            counter=i-prev;
            prev=i;
            if(counter  >   max)
                max=counter;

        }
    }
    if((a.size()+1-prev)>max )
                max=a.size()-prev;
    cout<<max;
    return 0;
}
