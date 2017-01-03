#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int i,j,length,test;
    char a[101];
    scanf("%d ",&test);
    while(test>0)
    {
        gets(a);

        length = strlen(a);


        if(length <=10)
        {
               puts(a);
        }
        else
        {
            i=length -2 ;
            printf("%c%d%c\n",a[0],i,a[length -1]);
        }
        test --;
    }
    return 0;
}
