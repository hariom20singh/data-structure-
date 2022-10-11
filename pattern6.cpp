#include <bits/stdc++.h>
using namespace std;

int main()
{  int n ;
   cin >> n;
   int row =1 ;
   while (row <=n)
   {
     int col =1 ;
     while(col <=n){
        char ch = 'A'+row+col-2;
        cout << ch ;
        col++;
     }
     cout << endl;
     row++;
   }
    
     
    return 0;
}