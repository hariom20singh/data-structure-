//Recursive Binary Search Implementation in C.
#include <stdio.h>
int BinarySearch(long long int arr[],long long int low,long long int high,long long int key){
	if(high < low){
		return -1;
	}
	long long int mid = low + (high-low)/2;
    if(arr[mid]==key)
		return mid;
	else if(key < arr[mid]){
		return BinarySearch(arr,low,mid-1,key);
	}
	else
		return BinarySearch(arr,mid+1,high,key);
}
int main(){
	long long int n,k,i;
	scanf("%lld",&n);
	long long int a[n];
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&k);
	long long int b[k];
	for(i=0;i<k;i++){
		scanf("%lld",&b[i]);
	}
	for(i=0;i<k;i++){
		b[i] = BinarySearch(a,0,n-1,b[i]);
		printf("%lld ",b[i]);
	}
}
