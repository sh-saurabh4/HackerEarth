#include<stdio.h>
#include<string.h>
int main(){
	int t,l,i,count;
	char s[100001];
	scanf("%d",&t);
	while(t){
		count = 0;
		scanf("%s",s);
		l = strlen(s);
		for(i = 0; i < l; i++){
		
			if(s[i] == 'B'){
				if(i-2 >= 0 && s[i-2] == 'W'){
					s[i-2] = 'A';
					count++;
				}
				if(i-1 >= 0 && s[i-1] == 'W'){
					s[i-1] = 'A';
					count++;
				}
				if(i+1 < l && s[i+1] == 'W'){
					s[i+1] = 'A';
					count++;
				}
				if(i+2 < l && s[i+2] == 'W'){
					s[i+2] = 'A';
					count++;
				}
			}
		//	printf("%d ",count);
			
		}
		printf("%d\n",count);
		t--;
	}
	return 0;
}
