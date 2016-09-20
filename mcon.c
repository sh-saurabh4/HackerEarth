#include<stdio.h>
#include<malloc.h>
long long ones(long long n){
	long long count = 0;
	while (n){
		n = n & n-1;
		count++;
	}
	return count;
}

void merge(long long *a, long long p1, long long q1, long long p2, long long q2){
	long long  *arr1,*arr2,i,j,k;
	arr1 = (long long *) malloc((q1 - p1 + 1)* sizeof(long long));
	arr2 = (long long *) malloc((q2 - p2 + 1)* sizeof(long long));
	for(i = p1; i <= q1; i++)
		arr1[i - p1] = a[i];
	for(i = p2; i <= q2; i++)
		arr2[i - p2] = a[i];
	i = j = 0;
	k = p1;
	while (i != (q1 - p1 + 1) || j != (q2 - p2 + 1)){
		if (i != (q1 - p1 + 1) && j != (q2 - p2 + 1)){
			if(arr1[i] <= arr2[j]){
				a[k] = arr1[i];
				i++;
				k++;
			}
			else {
				a[k] = arr2[j];
				j++;
				k++;
			}
		}
		else if (i == (q1 - p1 + 1)){
			a[k] = arr2[j];
			j++;
			k++;
		}
		else {
			a[k] = arr1[i];
			i++;
			k++;
		}
	}
}
			


void mergesort(long long *a, long long p, long long q ){
	if(q-p+1 > 1){
		long long mid = (p+q)/2;
		mergesort(a,p,mid);
		mergesort(a,mid+1,q);
		merge(a,p,mid,mid+1,q);
	}
}
 
int main()
{
	long long t,n,k,max1,max2,i,temp,sum,*arr;
	//long long *arr = (long long *)malloc(n * sizeof(long long));
	scanf("%lld",&t);
	while (t){
		sum = 0;
		scanf("%lld%lld",&n,&k);
		arr = (long long *)malloc(n * sizeof(long long));
		for (i = 0; i < n; i++){
			scanf("%lld",&temp);
			arr[i] = ones(temp);//printf("%lld**",arr[i]);
		}
		mergesort(arr,0,n-1);
//		for ( i = 0; i < n; i++)
//			printf("\n%lld",arr[i]);

		for (i = n-1;i > (n - 1 - k ); i--){
			sum += arr[i];
		}
		printf("%lld\n",sum);
		t--;
	}
	return 0;
}

