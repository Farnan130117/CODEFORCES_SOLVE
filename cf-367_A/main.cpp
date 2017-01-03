#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

double distanceCalculate(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2;
    double y = y1 - y2;
    double dist;

    dist = pow(x,2)+pow(y,2);           //calculating distance by euclidean formula
    dist = sqrt(dist);                  //sqrt is function in math.h

    return dist;
}

int main()
{
        double x1, y1, x2, y2,v,n,i,flag;
   double dist,maxi=0;
  //  cout<<"Enter x value of first coordinate "<<endl;           //user input needed
    cin>>x1;
   // cout<<"Enter y value of first coordinate "<<endl;
    cin>>y1;
    cin>>n;
    for(i=1;i<=n;i++){
  //  cout<<"Enter x value of second coordinate "<<endl;
    cin>>x2;
  //  cout<<"Enter y value of second coordinate "<<endl;
    cin>>y2;
    cin>>v;

    dist = distanceCalculate(x1, y1 , x2, y2);
             //calling distanceCalculate formula
         //    cout<<dist<<endl;
             flag=double(dist/v);
           //  cout<<flag<<endl;
    if(i==1)
        maxi=dist/v;
    else
        {
            if(flag<=maxi)
                maxi=flag;
        }


    }
     printf("%.20f",maxi);
     return 0;

}

