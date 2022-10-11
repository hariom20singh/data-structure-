#include<bits/stdc++.h>
using namespace std ; 
int maxProfit(vector<int>nums){
    int maxprofit  = INT_MIN; 
    int  minprice =INT_MAX;
    for(int i =0 ;i<nums.size(); i++){
        minprice= min(minprice,nums[i]);
        maxprofit=max(maxprofit,nums[i]-minprice);
    }
    return maxprofit;
}
int maxProfitbrute(vector<int>&nums){
    int max = 0; 
    for(int i = 0  ; i<nums.size() ; i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]<nums[j]){
                int tmax = nums[j]-nums[i];
                if(tmax>max){
                    max = tmax ;
                }
            }
        }
    }
    return max ;
}
int main(){
    vector<int> arr = {7,6,4,3,1,2};
    cout<<maxProfit (arr)<<endl;
    return 0 ; 
}