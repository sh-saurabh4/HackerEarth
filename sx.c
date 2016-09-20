#include <stdio.h>

int main()
{
    //printf("Hello World!\n");
    int n,t,i,a;
    scanf("%d",&t);
    while(t){
    	scanf("%d",&n);
    	for (i = 0 ; i < n; i++)
    		scanf("%d",&a);
    	if(n==1)
		printf("%d\n",a);
		else
		printf("%d\n",0);
    	
    	t--;
    }
    return 0;
}
