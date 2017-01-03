#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    int n;

    scanf ("%d", &n);

    int freq [4];

    memset(freq, 0, sizeof freq);

    int input;

    for ( int i = 0; i < n; i++ ) {
        scanf ("%d", &input);

        freq [input - 1]++;
    }

    int cnt = freq [3];

    cnt += freq [2];

    freq [0] -= freq [2];

    cnt += (freq [1] / 2);

    freq [1] -= (freq [1] / 2 * 2);

    if (freq [1]) {
        cnt++;
        freq [0] -= 2;
    }

    if (freq [0] > 0) {
        cnt += (freq [0] / 4);
        freq [0] -= (freq [0] / 4 * 4);

        if (freq [0] > 0) cnt++;
    }

    printf ("%d\n", cnt);

    return 0;
}
