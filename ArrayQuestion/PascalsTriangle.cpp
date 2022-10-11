/*
Problem link - https://leetcode.com/problems/pascals-triangle/
Problem Statement: Given an integer N, 
return the first N rows of Pascal’s triangle.

In Pascal’s triangle, each number is the sum of the two 
numbers directly above
Input Format: N = 5

Result:
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Explanation: There are 5 rows in the output matrix.
Each row corresponds to each one of the rows in the 
image shown above.
*/

#include<bits/stdc++.h>
using namespace std ; 
vector<vector<int>> generate(int numRow){
    vector<vector<int >> arr(numRow);
    for(int i = 0 ; i<numRow; i++){
        arr[i].resize(i+1);// in every row one element is added 
        arr[i][0]=arr[i][i]=1;// in a row putting first and last element is 1 
        for(int j = 1 ; j<i; j++){

            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];

        }
    }
    return arr; 
}

int main(){
    int n ; 
    cin>>n;
vector<vector<int>> ans  = generate(n);
for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    } 
    cout<<endl;
}
    return 0 ; 
}