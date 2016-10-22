#include<stdio.h>
int main(){
	unsigned long long n,a,b,c,state = 1,data;
	a = b = c = 0;
	scanf("%llu",&n);
	while(n){
		scanf("%llu",&data);
		if(state == 1){
			a+=data;
			state = 2;
		}
		else if(state == 2){
			b+=data;
			state = 3;
		}
		else{
			c+=data;
			state = 1;
		}
		n--;
	}
	printf("%llu %llu %llu",a,b,c);
	return 0;
}
