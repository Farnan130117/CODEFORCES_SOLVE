#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main ()
{
    string input;

    cin >> input;

    for ( int i = 0; i < input.size(); i++ ) {
        input [i] = tolower(input [i]);
    }

    for ( int i = 0; i < input.size(); i++ ) {
        if (!isVowel(input [i])) {
            printf (".%c", input [i]);
        }
    }

    printf ("\n");

    return 0;
}
