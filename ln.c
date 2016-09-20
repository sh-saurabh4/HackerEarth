#include<stdio.h>
int main()
{
	long long t,n,d=1,i,j,sum = 0,r;
	scanf("%lld",&t);
	while (t){
		sum = 0;
		scanf("%lld",&n);
		while (n / d){
			d *= 2;
		}
		i = d /= 2;
		//printf("%lld %lld\n",i,d);
		for ( ; i >= 2 ; i = i / 2 ){
			for (j = i / 2; j >= 1; j = j / 2){
				r = i|j;
				if (r <= n){
					sum = (sum + (r % 1000000007)) % 1000000007;
				}
			}
		}
		printf("%lld\n",sum);


	t--;
	}
	
	return 0;
}
