#include<stdio.h>
long long ones(long long n){
	long long count = 0;
	while (n){
		n = n & n-1;
		count++;
	}
	return count;
}



int main()
{
	long long t,m,p;
	scanf("%lld",&t);
	while (t){
		scanf("%lld%lld",&m,&p);
		printf("%lld\n",ones(m ^ p));
		t--;
	}
	return 0;
}

