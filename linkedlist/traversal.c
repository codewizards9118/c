void traversal(){
	struct node *ptr;
	ptr=start;
	printf("\nThe linked list is : \n ");
	while(ptr!=NULL){
		printf("%d---->",ptr->info);
		ptr=ptr->link;
	}
	printf("\n");
}
