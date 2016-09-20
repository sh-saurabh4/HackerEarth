#include<stdio.h>
int main()
{
	int t,n,z,a,i,res;
	scanf("%d",&t);
	while (t){
		scanf("%d%d",&z,&n);
		scanf("%d",&a);
		res = a;
		for (i = 0; i < n-1; i++){
			scanf("%d",&a);
			res = res & a;
		}
		if((z&res)==0)
			printf("Yes\n");
		else
			printf("No\n");
		t--;
	}
return 0;
}	

