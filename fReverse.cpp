
// This is the programme for finding the binary of any kind of number;

#include <bits/stdc++.h>
using namespace std;

void binary(int n)
{

    int a[10];
    int i;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }

    cout << "Binary number conversion is the -:";

    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
}

void usingWhileLopp(int n)
{
    int r, m = 1, bin = 0;
    while (n != 0)
    {
        r = n % 2;
        bin = bin + (r * m);
        m = m * 10;
        n = n / 2;
    }
    cout << bin;
}

int main()
{
    int num;
    cin >> num;
    binary(num);
    cout << "using while loop-:";
    usingWhileLopp(num);
}