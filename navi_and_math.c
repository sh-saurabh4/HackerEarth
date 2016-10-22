#include<stdio.h>

long long  modInverse(long long  a, long long  m)
{
    long long  m0 = m, t, q;
    long long  x0 = 0, x1 = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        // q is quotient
        q = a / m;
 
        t = m;
 
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;
 
        t = x0;
 
        x0 = x1 - q * x0;
 
        x1 = t;
    }
 
    // Make x1 positive
    if (x1 < 0)
       x1 += m0;
 
    return x1;
}

long long max(long long x, long long y){
	if(x > y)
		return x;
	else 
		return y;
}


long long fun(long long a[],int n,long long sum,long long multi,int count){
	if(n == -1){
			return (multi * (modInverse(sum,1000000007))%1000000007);
	}	
	if(n == 0){
		if(count == 0 || count == 1){
		return fun(a,n-1,(sum + a[n]),(multi * a[n])%1000000007,count + 1);
		}
		else{
			
		return max( fun(a,n-1,sum,multi,count) , fun(a,n-1,(sum + a[n]),(multi * a[n])%1000000007,count + 1) );
		}
	}
	else if(n == 1){
		if(count == 0){				
		return fun(a,n-1,(sum + a[n]),(multi * a[n])%1000000007,count + 1);
		}
		else{

		return max( fun(a,n-1,sum,multi,count) , fun(a,n-1,(sum + a[n]),(multi * a[n])%1000000007,count + 1) );
		}
	}
	else
		return max( fun(a,n-1,sum,multi,count) , fun(a,n-1,(sum + a[n]),(multi * a[n])%1000000007,count + 1) );
}

int main(){
	int t,n,i,count = 0,temp;
	long long a[20],result,sum = 0,multi = 1;
	scanf("%d",&t);
	temp = t;
	while(t){
		scanf("%d",&n);
		for (i = 0; i < n; i++){
			scanf("%lld",&a[i]);
		}
		result = fun(a,n,sum,multi,count);
		printf("helloCase #%d: %lld\n",temp-t+1, result);
		t--;
	}
	return 0;
}
	
	
