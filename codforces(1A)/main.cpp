#include <cstdio>
#include <cmath>

using namespace std;

int main ()
{
    int n;
    int m;
    int a;

    scanf ("%d %d %d", &n, &m, &a);

    printf ("%0.lf\n", ceil(n / (double) a) * ceil (m / (double) a));

    return 0;
}
