#include<iostream>
using namespace std;
//write a function to find if target is present in  the 2D array or not.
bool search(int a[3][3],int target,int m,int n)
{for(int i=0;i<m;i++)
{for(int j=0;j<n;j++)
{if(a[i][j]==target)
{return true;}
}
}
return false;
}


int main() {
int target;
cin>>target;
int a[3][3];
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
{cin>>a[i][j];}
}
cout<<"searching "<<target<<search(a,target,3,3);
return 0;
}