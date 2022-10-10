#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int32_t main()
{
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}
