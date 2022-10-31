#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if(__gcd(a,b)==1)
    {
        cout<<"Numbers are co-prime"<<endl;
    }
    else
    {
        cout<<"Numbers are not co-prime"<<endl;
    }

    return 0;
}
