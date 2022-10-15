#include<iostream>
using namespace std;
int duplicate(int a[],int n)
{int s=0;
for(int i=0;i<n;i++)
{s=s+a[i];}
int sum=n*(n+1)/2;
int ans=s-sum;
return ans;}


int main() {
    int a[5]={1,2,3,3,4};
    cout<<duplicate(a,5);
}