/*
Problem Statement: Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1,e=nums[0]; //starting with candidate at index 0 with 1 vote.
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==e)c++; //increase the vote if the candidate is same.
            else c--;   //otherwise decrease the vote
            if(c==0){   
                c=1;    
                e=nums[i];  //update the candidate if vote falls to 0
            }
        }
        return e;
    }
};
