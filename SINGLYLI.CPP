// #include<stdio.h>
// #include<conio.h>
#include <stdio.h>
#include<conio.h>
void main()
{
struct node
  {
  int data;
  struct node *next;
  };

struct node *temp, *head, *newnode;
head=0;
int choice = 0;
clrscr() ;
while(choice == 0)
  {
    newnode = (struct node *) malloc(1 * sizeof(struct node));
    printf("\n enter the data \n");
    scanf("%d",&newnode->data);
    if(head == 0)
      {
       head = newnode;
       temp= head;
      }
    else
      {
       temp->next=newnode;
       temp= newnode;
      }
   printf(" \n enter 1 to end and 0 to addd more \n");
   scanf("%d",&choice);
  }

  temp=head;
  while(temp != 0)
   {
     printf("\n ", temp->data);
     temp=temp->next;

   }
		     getch();


}