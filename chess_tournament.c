#include<stdio.h>
int power(int i, int n){
	int res = 1;
	while(n){
		res = res * i;
		n--;
	}
	return res;
}

void print(int b[], int n){
	int i;
	for(i= 1; i <= n; i++)
		printf("%d",b[i]);
	printf("\n");
}


int main(){
	int n,p,i,j,count;
	int a[1024][1024];
	int b[1024];
	scanf("%d",&n);
	p = power(2,n);
	//printf("%d\n",p);	
	for(i = 1; i < p; i++){
		for(j = 1; j <= i; j++){
			scanf("%d",&a[i][j]);
		}
	}
	/*for(i = 1; i < p; i++){
                for(j = 1; j <= i; j++){
                        printf("%d ",a[i][j]);
                }printf("\n");
        }*/
	for(i = 1; i <= p; i++){
		b[i] = i;
	}
	
	n = p;
	while(n != 1){
		count = 1;//print(b,n);
		for(i = 1 ; i < n ; ){
			if(a[b[i+1]-1][b[i]]){
				b[count] = b[i+1];
			}
			else{
				b[count] = b[i];
			}
			count++;
			i += 2;
		}
		n = count - 1;
		//print(b,n);
	}
	printf("%d\n",b[1]);		


	return 0;
}
	
