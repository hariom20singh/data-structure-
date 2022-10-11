// Problem - https://takeuforward.org/data-structure/set-matrix-zero/
// Practice- https://leetcode.com/problems/set-matrix-zeroes/

// Approach 1 - BruteForce - first find the zero in 2D array and after that put the
//-1 of 0 th value row and coloum (above row will get zero ,below row will get zero
//  and all left column and right column of 0th row will also -1 ) After traverse 2d
//  matrix find -1 or put it Zero where we get -1 .
// ##*****This Method Used where 2D array not contain negative number***##
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &arr)
{
    int m = arr.size();
    int n = arr[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                int index = i - 1;
                while (index >= 0)
                {
                    if (arr[index][j] != 0)
                    {
                        arr[index][j] = -1;
                        
                    }
                    index = index - 1;
                }
                index = i + 1;
                while (index < m)
                {
                    if (arr[index][j] != 0)
                    {
                        arr[index][j] = -1;
                       
                    }
                     index += 1;
                }
                index = j - 1;
                while (index >= 0)
                {
                    if (arr[i][index] != 0)
                    {
                        arr[i][index] = -1;
                        
                    }
                    index -= 1;
                }
                index = j + 1;
                while (index < n)
                {
                    if (arr[i][index] != 0)
                    {
                        arr[i][index] = -1;
                      
                    }
                    index += 1;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr;
    // arr = {{0, 1, 2, 3}, {4, 56, 42, 2}, {4, 2, 3, 1}, {1, 2, 3, 0}};
   // Time limit exceed input
    // arr ={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    // Wrong ans input because this contain negative number
    arr ={{1,1,1},{1,0,1},{1,1,1}};
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
    return 0;
}