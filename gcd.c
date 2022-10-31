#include <stdio.h>
int gcd(long int a,long int b){
	long int c = a%b;
	if(c!=0){
		gcd(b,c);
	}
	else{
		printf("%ld",b);
	}
}
int main(){
	long int a,b;
	scanf("%ld %ld",&a,&b);
	gcd(a,b);
}
