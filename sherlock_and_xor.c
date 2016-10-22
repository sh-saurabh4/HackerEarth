#include<stdio.h>
int main()
{
	int t;
	long long i,n,data,ecount = 0,ocount;
	scanf("%d",&t);
	while (t){
		ecount = 0;
		scanf("%lld",&n);
		for (i = 0; i < n; i++){
			scanf("%lld",&data);
			if(data%2 == 0)
				ecount++;
		}
		ocount = n - ecount;
		printf("%lld\n",ecount * ocount);
		t--;
	}
	return 0;
}
