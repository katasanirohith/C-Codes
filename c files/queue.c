#include<stdio.h>
#include<stdlib.h>
struct node
{
	int el;
	struct node *link;
};
struct node *f=NULL;
struct node *r=NULL;
void addition(int x);
void deletion();
void display();
int main()
{
	int x,n,i;
	printf("Enter the numbers you want to enter in the queue=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number=");
		scanf("%d",&x);
		addition(x);
	}
	display();
	printf("Enter the number of elements you want to delete from the queue=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		deletion();
	}
	display();
	return(0);
}
void addition(int x)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->el=x;
	temp->link=NULL;
	if(f==NULL&&r==NULL)
	{
		f=r=temp;
		return;
	}
	r->link=temp;
	r=temp;
}
void deletion()
{
	struct node *temp = f;
	if(f==NULL&&r==NULL)
	{
		printf("Queue is empty.\n");
	}
	else
	{
		if(f==r)
		{
			f=r=NULL;
		}
		else
		{
			f=temp->link;
		}
	}
	free(temp);
}
void display()
{
	struct node *temp = f;
	printf("The queue is=");
	if(f==NULL&&r==NULL)
	{
		printf("Empty.\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\n",temp->el);
			temp=temp->link;
		}
	}
}
	
