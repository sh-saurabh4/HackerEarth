#include<stdio.h>
int main(){
	char s[100001];
	char *p1;
	int x = 0,y = 0;
	scanf("%s",s);
	p1 = s;

	while(*p1 != '\0'){
		if(*p1 == 'L')
			x -= 1;
		else if(*p1 == 'R')
			x += 1;
		else if(*p1 == 'U')
			y += 1;
		else
			y -= 1;
		p1++;//printf("%c\n",*p1);
	}
	printf("%d %d\n",x,y);
	return 0;
}
