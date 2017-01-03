#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n, p, v, t, flag = 0;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
       scanf("%d%d%d",&p,&v,&t);
        if (p + v + t > 1) {
            flag++;
        }
    }
    printf("%d\n",flag);
    return 0;
}
