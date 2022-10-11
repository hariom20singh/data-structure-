#include<bits/stdc++.h>
using namespace std ; 
// Apporach 1 - This is approach using dummy array for first row and column.
//If first row or first column 
//has the zero then the entire row and column will be zero.
void setZeroes(vector<vector<int>> &matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int>d1(row,-1),d2(col,-1);
    for(int i =0 ; i<row; i++){
        for(int j =0 ; j<col ; j++){
            if(matrix[i][j]==0){
                d1[i]=0;//this dummy array tell about the a particular row will contain Zeros or not.
                d2[j]=0;// It tells about the a particular column will contain Zeroes or not .
                // for ex. If In the d1 0th index is Zero than in the matrix 0th row whole element 
                // will contain 0 => (0,0) (0,1) (0,2) ....(0,row) 
            }
        }
    }
    for(int i =0 ; i<row; i++){
        for(int j =0 ; j<col; j++){
            if(d1[i]==0||d2[j]==0){
                matrix[i][j]=0;
            }
        }
    }
}

int main(){
    vector<vector<int>>arr;
       //arr ={{1,1,1},{1,0,1},{1,1,-1}};
         arr={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    setZeroes(arr);
    cout << "Matrix :" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    return 0 ;
}