#include<stdio.h>
int main()
{
	long long t,a,b;
	scanf("%lld",&t);
	while (t){
		scanf("%lld%lld",&a,&b);
		if(b%2 == 0){
			if(b-2 >= a)
			printf("%lld\n",b-2);
			else
			printf("%lld\n",b&a);
		}
		else
			printf("%lld\n",b-1);
		t--;
	}
	return 0;
}

