//Frequencies of Limited Range Array Elements
//Problem link : https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
/*
Given an array A[] of N positive integers which can contain integers from 1 to P where elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.
Note: The elements greater than N in the array can be ignored for counting and please read your task section of the problem carefully to understand how to output the array.


Example 1:

Input:
N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
Explanation:
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.
Example 2:

Input:
N = 4
arr[] = {3,3,3,3}
P = 3
Output:
0 0 4 0
Explanation:
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 0 times.
3 occurring 4 times.
4 occurring 0 times.

Your Task:
You don't need to read input or print anything. Complete the function frequencycount() that takes the array and n as input parameters and modify the array itself in place to denote the frequency count of each element from 1 to N. i,e element at index 0 should represent the frequency of 1 and so on.


Note: Can you solve this problem without using extra space (O(1) Space) !


Constraints:
1 ≤ N ≤ 105
1 ≤ P ≤ 4*104
1 <= A[i] <= P
*/

#include<iostream>
using namespace std;

int main(){

}//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    {
        // code here
        int hash[N]={0};
        int i=0;
        while(i<N){
            if(arr[i]<=N)
                hash[arr[i]-1]++;
            i++;
        }
        for(int i=0;i<N;i++){
            arr[i] = hash[i];
        }
    }
};
/*
Time-Complexity : O(N)
Space-Complexity: O(N)
*/

//Method-2 : Efficient Method- Since elements of array are positive integers therefore we can count the frequency of occurrence in negative values
//Algorithm:
/*
Traverse the array from start to end.
For each element check if the element is less than or equal to zero or not. If negative or zero skip the element as it is frequency.
If an element (e = array[i] – 1 ) is positive, then check if array[e] is positive or not. If positive then that means it is the first occurrence of e in the array and replace array[i] with array[e], i.earray[i] = array[e] and assign array[e] = -1. If array[e] is negative, then it is not the first occurrence, the update array[e] as array[e]– and update array[i] as array[i] = 0.
Again, traverse the array and print i+1 as value and array[i] as frequency.
*/
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    {
        // code here
        int i=0;
        while(i<N){
            if(arr[i]<=0){
                i++;
                continue;
            }
            //store the correct index/position of a[i] th element in array to store its frequency of occurrence.
            int elementIndex = arr[i]-1;
            //If element at a[i] position is greater than N-1. That means we don't have array size to store its occurrence.
            if(elementIndex>=N){
                arr[i]=0;
                i++;
            }
            //If element at correct index/position of arr[i] is greater than 0 that means its not the occurrence frequency count. Its the element for which we have to count occurrence.
            else if(arr[elementIndex] >0){
                //If the elementIndex has an element that is not
                // processed yet, then first store that element
                // to arr[i] so that we don't lose anything.
                arr[i] = arr[elementIndex];//There can be some other element at the correct index/position of arr[i] so putting the element arr[elementIndex] at arr[i]
                // After storing arr[elementIndex], change it
                // to store initial count of 'arr[i]'
                arr[elementIndex] = -1;
            }
            else{
                // If this is NOT first occurrence of arr[i],
                // then decrement its count.
                arr[elementIndex]--;
                // And initialize arr[i] as 0 means the element
                // is not seen so far
                arr[i] = 0;
                //Increment the pointer i only when arr[i] is <=0 that means at i th position occurrence of element is calculated.
                i++;
            }
        }
        //To make all the frequency count to positive numbers as required in output.
        for(int i=0;i<N;i++){
            arr[i] = arr[i]*-1;
        }
    }
};
//Time-Complexity: O(N)
//Space-Complexity: O(1)


//{ Driver Code Starts.

int main()
{
	long long t;

	//testcases
	cin >> t;

	while(t--){

	    int N, P;
	    //size of array
	    cin >> N;

	    vector<int> arr(N);

	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i];
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P);

		//printing array elements
	    for (int i = 0; i < N ; i++)
			cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends
