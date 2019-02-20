//Program to implement double ended queue using linked list
#include <stdio.h>
#include <stdlib.h>

struct node 
{
int data;
struct node *next;
struct node *prev;
};

struct node *front = NULL;
struct node *rear = NULL;

void InsertAtFront(int data)	//Function to insert node at the beginning at the list 
{
struct node *link = (struct node*) malloc(sizeof(struct node));
link->data = data;

if(front==NULL)
rear = link;
else 
front->prev = link;

link->next = front;
front = link;
}

void InsertAtRear(int data)	//Function to insert node at the end of the list 
{
struct node *link = (struct node*) malloc(sizeof(struct node));
link->data = data;

if(front==NULL) 
rear = link;
else 
{
rear->next = link;
rear = link;     
link->prev = rear;
}
}

int  DeleteAtFront()	//Function to delete node at the beginnning of the list 
{
struct node *tempLink = front;
if(front==NULL)
{
printf("Underflow\n");
exit(0);
}	
if(front->next == NULL)
rear = NULL;
    
else 
front->next->prev = NULL;
   
front = front->next;
return tempLink->data;
}

int  DeleteAtRear()	//Function to delete node at the end of the list 
{
struct node *tempLink = rear;
if(front==NULL)
{
printf("Underflow\n");
exit(0);
}
if(front->next == NULL) 
front = NULL;
else 
rear->prev->next = NULL;

rear = rear->prev;
return tempLink->data;
}

void main() 
{
char ch;
int x;
printf("COM105T Course Project Submitted By Mohnish Vegi (CED16I035) \n");
while(1)
{
printf("1: Insert From Front\n");
printf("2: Insert From Rear\n");
printf("3: Delete From Front\n");
printf("4: Delete From Rear\n");
printf("5: Exit Program\n");
printf("Enter Your Choice: ");
scanf(" %c",&ch);
switch(ch)
{
case '1': printf("\nEnter Integer Data :");
  scanf("%d",&x);
                  InsertAtFront(x);
  break;

case '2': printf("\nEnter Integer Data :");
  scanf("%d",&x);
  InsertAtRear(x);
  break;

case '3': printf("\nDeleted Data From Front End: %d\n",DeleteAtFront());
  break;

case '4': printf("\nDeleted Data From Back End: %d\n",DeleteAtRear());
  break;

case '5': exit(0);
  break;
}

}
  

}
