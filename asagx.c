#include<stdio.h>
int main()
{
	long long n,a,res;
	scanf("%lld",&n);
	scanf("%lld",&a);
	res = a;
	while (n - 1){
		scanf("%lld",&a);
		res = res | a;
		n--;
	}
	printf("%lld\n",res);
	return 0;
}
