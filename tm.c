#include<stdio.h>
long long ones(long long n){
	long long count = 0;
	while (n){
		n = n & (n-1);
		count++;
	}
	return count;
}
int main()
{
	long long t,n;
	scanf("%lld",&t);
	while (t){
		scanf("%lld",&n);
		printf("%lld\n",ones(n));
		t--;
	}
	return 0;
}
