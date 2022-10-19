 #include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int a,b,c;
    a=arr[0];
    b=arr[1];
    c=arr[2];
    if(a>b)
    swap(a,b);
    if(b>c)
    swap(b,c);
    if(a>b)
    swap(a,b);
    for(int i=3;i<n;i++)
    {
        if(arr[i]>a)
        {
            a=arr[i];
            if(a>b)
            swap(a,b);
            if(b>c)
            swap(b,c);
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}