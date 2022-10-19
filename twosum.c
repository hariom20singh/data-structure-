#include<stdio.h>
#include<stdbool.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans = 0;
	for(int i = 0;i<n;i++){
		int temp = k-a[i];
		int s = 0;
		int e = n-1;
		bool flag = false;
		while(s<=e){
			int m = (s+e)/2;
			if(a[m] == temp){
				flag = true;
				break;
			}
			if(temp<a[m]){
				e = m-1;
			}else{
				s = m+1;
			}
		}
		if(flag){
			ans = 1;
			break;
		}
	}
	printf("%d",ans);
	return 0;
}