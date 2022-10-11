// To find maxmimum subarray sum when subarray contain negative number
#include <bits/stdc++.h>
using namespace std;
int  maxsum(int arr[],int n){
int max = INT_MIN;
for(int i =0 ; i<n ;i++){
   int  curr = 0 ;
    for(int j =i ; j<n; j++){
curr+=arr[j];
if(curr>max){
    max=curr;
}
    }
} 
return max ;
} 
int kadanes(vector<int>nums){
    int max = INT_MIN; 
    int curr =  0 ; 
    for(int i = 0 ; i<nums.size(); i++){
        curr+=nums[i];
        if(curr>max){
            max = curr;
        }
        if(curr<0){
            curr=0;
        }
    }
    return max;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,n)<<endl;
    vector<int > a = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<kadanes(a)<<endl;
    return 0; 
}