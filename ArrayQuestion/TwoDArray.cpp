#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std ; 
int main (){
    // vector<vector<int>>arr;
    
    cout << "Enter the NO. of Rows :";
    int r ;
    cin>>r; 
    int c ;
    cout<<"Enter the No . of Columns : "; 
    cin>>c; 
    // int val = 0; 
    // int arr [r][c];
    // for (int i =0 ; i<r ; i++ ){
    //     for(int j = 0 ; j<c; j++){
    //         arr[i][j]=val;
    //     }
    //     val+=1;
    // }
    // for (int i =0 ; i<r ; i++){
    //       for (int j = 0 ; j<c;j++){
    //           if(i==0||j==0)
    //           cout<<arr[i][j]<<" ";
    //           else if(i==r-1||j==c-1)
    //           cout<<arr[i][j]<<" ";
    //           else cout<<"  ";
    //       }   
    //       cout<<endl;
    // }
    vector<vector<int>> vect ; 
            int vl=0; 
    for (int i =0 ; i< r ; i++){
        vector<int> temp ; 
        for(int j=0; j<c; j++){
            // cin>>vl;
            temp.push_back(vl);
        }
        vl +=1;
        vect.push_back(temp);
    }
    for(int i =0 ; i<vect.size(); i++){
        for(int j =0 ; j < vect[i].size(); j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    // }
    return 0;
}