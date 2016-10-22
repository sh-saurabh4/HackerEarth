#include<stdio.h>
void print(unsigned long long  r[],unsigned long long  x, unsigned long long  count,unsigned long long n){
	unsigned long long i;
	printf("x = %llu\n",x);
	for(i = 0; i < n ; i++){
		printf("%llu ",r[i]);
	}
	printf("\n");
	//printf("%llu\n",count);
}
int main(){
	unsigned long long q,n,a,b,t,x,i,p[100001],r[100001],count = 0;
	scanf("%llu",&q);
	while(q){
		scanf("%llu",&n);
		for(i = 0;i < n; i++){
			scanf("%llu",&p[i]);
			r[i] = 0;
		}
		scanf("%llu%llu%llu%llu",&x,&a,&b,&t);
		count = 0;
		while(t){
			r[x]++;//print(r,x,count,n);
			if(r[x] >= p[x]){
				count++;
				r[x] = 0;
			}
			x = (((a%n)*x) + (b%n)) % n;
			t--;
		}
		printf("%llu\n",count);
		q--;
	}
	return 0;
}	
