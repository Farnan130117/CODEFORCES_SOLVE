#include <iostream>

using namespace std;

int main()
{
    int b,c,i,j,k,n,start,target,flag=0;
    char  a[105], s;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        a[i]=s;
        if(s=='G')
            start=i;
        if(s=='T')
            target=i;
    }
    //cout<<start<<endl<<target;

    if(start>target){
    for(i=start-k;i>=1;i=i-k)
    {
        if(a[i]=='#'){
                flag=1;
                cout<<"NO";
            break;
        }
        if(a[i]=='T')
        {
            flag=1;
            cout<<"YES";
            break;
        }
    }
    }

    if(start<target)
    for(i=start+k;i<=target;i=i+k)
    {

        if(a[i]=='#')
            {
                flag=1;
                cout<<"NO";
                break;
            }
        if(a[i]=='T')
        {
            flag=1;
            cout<<"YES";
            break;
        }

    }
    if(flag==0)
        cout<<"NO";
    return 0;
}
