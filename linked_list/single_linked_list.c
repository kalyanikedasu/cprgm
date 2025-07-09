#include<stdio.h>	//input output statements
#include<stdlib.h>	//for malloc
struct sll	//sll-single linked list---structure name
{
	int data;
	struct sll*next;
};
int main()
{
	struct sll*head=NULL;
	struct sll*second=NULL;
	struct sll*third=NULL;
	head=(struct sll*)malloc(sizeof(struct sll));
	second=(struct sll*)malloc(sizeof(struct sll));
	third=(struct sll*)malloc(sizeof(struct sll));
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=NULL;
	struct sll* temp=head;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
	return 0;
}

