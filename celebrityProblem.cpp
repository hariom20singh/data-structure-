#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        for(int i = 0;i<n;i++)st.push(i);
          int ans = 0;
        for(int i = 1;i<n;i++){
            int a = ans;
            
            int b = i;
           
            //checking if a knows b
            if(M[a][b]){
                //a is not celbrity
                if(!M[b][a])ans = b;
            }else{
                //a doesn't know b
                if(M[b][a])ans = a;
            }
        }
        if(st.empty())return -1;
        bool isCeleb = true;
      
        for(int i = 0;i<n;i++){
            if(i != ans && M[i][ans] == 0)isCeleb = false;
        }
        for(int i = 0;i<n;i++){
            if(M[ans][i] != 0){
                isCeleb = false;
            }
        }
        if(isCeleb)return ans;
        return -1;
    }
};