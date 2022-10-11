class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        
        unordered_map<int,int> hash;
        
        for(int i=0;i<n;i++){
            
            if(hash.find(nums[i]) == hash.end())
                
                hash[nums[i]]++;
            
            else return true; 
        }
        
        return false;
        
    }
