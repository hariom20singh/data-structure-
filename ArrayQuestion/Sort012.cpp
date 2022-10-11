//array containing  0's , 1's , and 2 's 
// sort the array 
#include <bits/stdc++.h>
using namespace std ; 
void countsort(vector<int>&nums){
    int c0 = 0 , c1 = 0 , c2 = 0; 
    for(int a : nums){
        if(a==0){
c0++;
        }
        else if(a==1){
            c1++;
        }
        else{
            c2++;
        }
    
    }
    int i = 0 ; 
    while(i<nums.size()){
        if(c0!=0){
            nums[i]=0;
            c0 -=1;
            i++;
        }
        else if(c1!=0){
            nums[i]=1;
            c1 -=1;
            i++;
        }
        else{
            nums[i]=2;
            c2-=1;
            i++;
        }
    }

}
void swap(vector<int> &arr, int i, int index)
{
	int temp = arr[index];
	arr[index] = arr[i];
	arr[i] = temp;
}
void sort(vector<int>&nums){
    int n=nums.size(); 
    int s =0 ; 
    int h = n-1 ; 
    int m = 0; 
    while(m<=h){
        switch (nums[m])
        {
        case   0 :
        swap(nums,m++,s++);
   
            /* code */
            break;
        case 1: 
        m++; 
        break;
        case 2: 
        swap(nums,m,h--);
        
        break;
        
        default:
            break;
        }
    }
}

int main(){
    vector <int > arr ={2,0,2,1,1,0};
    sort(arr);
    for(auto a:arr ){
        cout<<a <<" ";

    }
cout<<endl;
}
