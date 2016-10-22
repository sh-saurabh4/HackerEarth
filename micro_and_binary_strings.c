#include<stdio.h>
#include<string.h>
long long ones(char str[]){
	long long count = 0,i = 0;
	while(i < strlen(str)){
		if(str[i] == '1')
			count++;
		i++;
	}
	return count;
}

int main(){
	long long t,n;
	char str[100002];
	scanf("%lld",&t);
	while (t){
		scanf("%lld",&n);
		scanf("%s",str);
		printf("%lld\n",ones(str));
		t--;
	}
	return 0;
}	
