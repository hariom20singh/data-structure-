//function overloading
//wap to find area of circle,rect,triangle,square by function overloading
#include<iostream>
using namespace std;
int area(int l, int b)
{
	int ar=l*b;
	return ar;
}
float area(float  r)
{
	float ar=4*(3.14 )*(r*r);
	return ar;
}
float  area(float p, float h)
{
	float ar=(p*h)/2;
	return ar;
}
int main()
{
	int l,b;
	cout<<"enter length";
	cin>>l;
	cout<<"enter width";
	cin>>b;
	cout<<"area of rec is"<<area(l,b);
	int r;
	cout<<"\nenter radius";
	cin>>r;
	cout<<"\narea of circle is"<<area(r);
	float p,h;
	cout<<"\nenter base";
	cin>>p;
	cout<<"\nenter height";
	cin>>h;
	cout<<"\narea of triangle is"<<area(p,h);
}


