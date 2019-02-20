#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void insert(int data)
{
	struct node *newptr;
	newptr=malloc(sizeof(struct node));
	newptr->data=data;
	newptr->next=NULL;
	if(front==NULL)
		front=rear=newptr;
	else
	{
		rear->next=newptr;
		rear=newptr;
	}
}
void delete()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("\nNo Data to Delete!\n");
		return;
	}
	temp=front;
	front=front->next;
	free (temp);
}
void display()
{
	struct node *temp=front;
	printf("\nQueue: \n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int data=0,opt=0;
	printf("\nQueue as a Linked List\n");
	while(opt!=4)
	{
		printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter Option: \n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: printf("\nEnter Data: ");
				scanf("%d",&data);
				insert(data);
				break;
			case 2: delete();
				break;
			case 3: display();
				break;
		}
	}
	return 0;
}
