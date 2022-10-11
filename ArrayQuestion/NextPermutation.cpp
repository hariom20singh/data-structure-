#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int n = 3;

    int arr[n]={3,2,1};
    vector<int>a={2,1,3};

    next_permutation(arr,arr+n);
    for(int i =0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ; 
}