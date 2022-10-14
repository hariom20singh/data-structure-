// finding N-th term in fibonacci series 
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5; 
vector<int>dp(N+1,-1);
// N-th term in fibonacci series using normal recursive method
int FibRecursive(int n){
	if(n == 1 ){
		return 0;
	}
	if(n == 2){
		return 1;
	}
	return FibRecursive(n-1)+FibRecursive(n-2);
}
// N-th term in fibonacci series using dynamic prgramming recursively
int FibDpRecursive(int n){
	if(n == 1){
		return 0;
	}
	if(n == 2){
		return 1;
	}
	if(dp[n] == -1){
		dp[n] = FibDpRecursive(n-1)+FibDpRecursive(n-2);
	}
	return dp[n];
}
// N-th term in fibonacci series using dynamic prgramming iterative method
int FibDpIterative(int n){
	vector<int>dpi(n);
	dpi[0] = 0;
	dpi[1] = 1;
	for(int i = 2;i<n;i++){
		dpi[i] = dpi[i-1] + dpi[i-2];
	}
	return dpi[n-1];
}
int main(){
	int n;
	cin>>n;
	cout<<"For normal recursive method\n";
	cout<<FibRecursive(n)<<" in O(2^n)\n";
	cout<<"For Dp recursive method\n";
	cout<<FibDpRecursive(n)<<" in O(n)\n";
	cout<<"For Dp iterative method\n";
	cout<<FibDpIterative(n)<<" in O(n)\n";
}
