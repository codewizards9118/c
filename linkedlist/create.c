#include<stdio.h>
#include<malloc.h>
struct node{
	int info;
	struct node *link;
}*start=NULL;
void create(){
	struct node *ptr,*tmp;
	int n;
	ptr=malloc(sizeof(struct node));
	printf("\nEnter the info : \n");
	scanf("%d",&ptr->info);
	start=ptr;
	do{
		tmp=malloc(sizeof(struct node));
		printf("\nEnter the info : \n");	
		scanf("%d",&tmp->info);
		ptr->link=tmp;
		ptr=tmp;
		printf("\nDo you want to enter another node : \n");
		scanf("%d",&n);
		
	}while(n==1);
	ptr->link=NULL;
}
