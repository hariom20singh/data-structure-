#include<iostream>
using namespace std;
int main()
{
    int a[10],item,i,j;
    cout<<"enter 10 elements \n";
    for(i=0; i<=9;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the item that you want to search \n";
    cin>>item;
    for(i=0;i<=9;i++)
    {
        if(a[i]==item)
        {
            cout<<"successful search \n";
        }
        if(i==10)
        {
            cout<<"unsuccessful search \n";
        }
    }
}