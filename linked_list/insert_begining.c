#include<stdio.h>
#include<stdlib.h>
struct sll
{
	int data;
	struct sll*next;
};
void InsertAtBeginning(struct sll**head_ref,int data)
{
        struct sll*new_node=(struct sll*)malloc(sizeof(struct sll));
        new_node->data=data;
        new_node->next=*head_ref;
        *head_ref=new_node;
}
int main()
{
	struct sll*head=NULL;
	struct sll*second=NULL;
	struct sll*tail=NULL;
	head=(struct sll*)malloc(sizeof(struct sll));
	second=(struct sll*)malloc(sizeof(struct sll));
        tail=(struct sll*)malloc(sizeof(struct sll));
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=tail;
	tail->data=30;
	tail->next=NULL;
struct sll* temp=head;
printf("Original Linked List\n");
 while(temp!=NULL)
{
	printf("%d ->",temp->data);
	temp=temp->next;
}
printf("NULL\n");
int new_data;
printf("Enter a new value to be inserted at the beginning:");
scanf("%d",&new_data);
InsertAtBeginning(&head,new_data);
printf("After inserting at beginning:\n");
temp=head;
while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;
}
printf("NULL\n");
return 0;
}



