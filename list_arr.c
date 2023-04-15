#include<stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
  node *head=NULL,*p,*q;

int* list_to_arr(node *head){
	if(head==NULL){
		printf("list is empty");
		return NULL;
	}
	else{
		node *p=head;
	   	int *t=(int*)malloc(sizeof(int)*length(head));
		int i;
		for(i=0;i<length(head);i++){
			t[i]=p->data;
			p=p->next;
		}
		return t;
	}
}
node* arr_to_list(int *t,int length){
	int i=0;
	for(i=0;i<length;i++){
		add_node(t[i]);
	}
	return head;
}

int length(node *head){
	if(head==NULL){
		printf("list is empty");
		return -1;
	}
	else{
		p=head;int count=0;
		while(p!=NULL){
			p=p->next;
			count++;
		}
		return count;
	}
}

void add_node(int val){
       	p=(node*)malloc(sizeof(node));
		p->data=val;
		p->next=NULL;
		if(head==NULL)
		{
			head=p;}
		else{
			q=head;
			while(q->next!=NULL){
				q=q->next;
			}
			q->next=p;
		}	
}

void display_list(node *head){
	if(head==NULL){
		printf("list is empty");
	}
	else{
		p=head;
		while(p!=NULL)
		{
			printf("%i\n",p->data);
			p=p->next;
		}
		}
}


void display_arr(int *t,int n){
    int i;
	for(i=0;i<n;i++){
		printf("%i",t[i]);
	}	
}		

int main(){
	int t;
	printf("list --> array enter 1\narray-->list enter 2  ");
	scanf("%i",&t);
	if(t==1){
		int n,val,i;
		printf("enter the number of nodes ");
		scanf("%i",&n);
		for(i=0;i<n;i++){
	    printf("enter the value ");
		scanf("%i",&val);
			add_node(val);
		}
		display_arr(list_to_arr(head),n);
	}
		else{
		int n,val,i;
		printf("enter the number of elements ");
		scanf("%i",&n);
		int *t=(int*)malloc(sizeof(int)*n);
		for(i=0;i<n;i++){
		printf("enter the value ");
		scanf("%i",&val);
			t[i]=val;
		}
		display_list(arr_to_list(t,n));
	}
	
}
