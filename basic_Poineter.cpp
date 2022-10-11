#include<bits/stdc++.h>
using namespace std;
void sum(int *a)
{
    *a=10;
}
int main()
{
	int x=6,y=11;
	int *p;
	p=&x;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
    int **pp;
    pp=&p;
    cout<<pp<<endl;
    cout<<*pp<<endl;
    cout<<**pp<<endl;
    sum(p);
    cout<<**pp<<endl;
	

}