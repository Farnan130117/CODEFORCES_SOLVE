#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t,i;
    int k=0,j=0,flag=0,m=0;
    int len,fan=0,r=0;

    char s[260],c,bra[260]={'\0'},panty[260]={'\0'};
    char * lol;
    char * p;

    string  h;

    cin>>t;
    getchar();

    //main_string
    for(i=0;i<t;i++)
    {
        cin>>s[i];
    }
        getchar();
    for(i=0;i<t;i++)
    {
        c=s[i];


        if(c=='(')
        {
                flag=1;
        }

        if(flag==0)
        {
            panty[j]=c;
            j++;
        }

        if(flag==1)
        {
            bra[k]=c;
            k++;
        }
        if(c==')')
        {
            flag=0;
            panty[j]='_';
            j++;
        }


    }




  p = strtok (panty," ,_");

  while (p != NULL)
  {
        string h(p);
    len=h.length();

    if(len>=fan)
        fan=len;

    p = strtok (NULL, " ,_");

  }


lol = strtok (bra," ,_()");

  while (lol != NULL)
  {

  r=r+1;

    lol = strtok (NULL, " ,_()");

  }
   cout<<fan<<" "<<r;
  return 0;
}
