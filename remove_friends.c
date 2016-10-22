#include<stdio.h>
#include<malloc.h>
struct node {
	int data;
	struct node * next;
};
struct node * insert(struct node * head,int size){
	struct node *p,*q;
	struct node *arr = (struct node *)malloc(size * sizeof(struct node));
	int i = 0;
	while(i < size){
		p = &(arr[i]);
		scanf("%d",&p->data);
		p->next = NULL;
		if(head == NULL){
			q = head = p;
		}
		else{
			q->next = p;
			q = p;
		}
		i++;
	}
	return head;
}

void print(struct node * head){
	if(head != NULL){
		while(head != NULL){
		printf("%d ",head->data);
		head = head->next;
		}
		printf("\n");
	}
}
int main(){
	struct node *head = NULL,*p,*q;
	int n,k,t,i,j,flag;
	scanf("%d",&t);
	while(t){
		head = NULL;
		scanf("%d%d",&n,&k);
		head = insert(head,n);
		for(i = 0; i < k; i++){
			p = q = head;
			flag = 0;
			for(j = 1; j < n; j++){
				if(p->data < p->next->data){
					if(p == head){
						head = p->next;
					}
					else{
						q->next = p->next;
					}
					flag = 1;
					break;	
				}
				q = p;
				p = p->next;
			}
			
			if(flag == 0){
				if(p == head )
					head = NULL;
				else
					q->next = NULL;
			}
			n--;
		}
		print(head);
		t--;
	}
	return 0;
}				
