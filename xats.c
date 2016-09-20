#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100001],s2[100001];
	int t,alpha[26],l1,l2,i,res;
	scanf("%d",&t);
	while (t){
	        for (i = 0; i < 26; i++)
			alpha[i] = 0;
		res = 0;
		scanf("%s",s1);
		scanf("%s",s2);
		l1 = strlen(s1);
		l2 = strlen(s2);
		for (i = 0; i < l1; i++ ){
			alpha[s1[i] - 'a'] = 1;
		}
		for (i = 0; i < l2; i++){
			if( alpha[ s2[i] - 'a'] == 1){
				res = 1;
				break;
			}
		}
		if (res)
			printf("Yes\n");
		else
			printf("No\n");
		t--;
	}
	return 0;
}
	
