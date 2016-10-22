#include<stdio.h>
int  fun(long long a[],int n,long long sum,long long data){
	if(n != -2){
		if(sum == data){
			return 1;
		}
		return (fun(a,n-1,sum,data) | fun(a,n-1,sum+a[n],data));
	}
	return 0;
}
	

int main(){
	int t,n,i,flag;
	long long a[20],data,sum = 0;
	scanf("%d",&t);
	while (t){
		flag = 0;
		sum = 0;
		scanf("%d",&n);
		for(i = 0; i < n; i++){
			scanf("%lld",&a[i]);
		}
		scanf("%lld",&data);
		flag = fun(a,n-1,sum,data);
		if(flag == 1)
			printf("YES\n");
		else
			printf("NO\n");
		t--;
	}
	return 0;
}
