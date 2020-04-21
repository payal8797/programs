#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*next;
}node;

struct node* front;
struct node* rear;

void enQueue();
void deQueue();
void peek();

void enQueue()
{
    struct node* head;
    int data;
    head=(struct node*)malloc(sizeof(struct node));
    if (head==NULL)
    {
        printf("No data");
        return;
    }
    else
    {
        printf("Enter element in the queue:");
        scanf("%d",&data);
        head->data =data;  
        if(front == NULL)  
        {  
            front=head;  
            rear=head;   
            front->next = NULL;  
            rear->next = NULL;  
        }  
        else   
        {  
            rear->next=head;  
            rear=head;  
            rear->next=NULL;  
        }  
    }  
}     


void deQueue()  
{  
    struct node *head;  
    if(front == NULL)  
    {  
        printf("\nNo data\n");  
        return;  
    }  
    else   
    {  
        head= front;  
        front = front -> next;  
        free(head);  
    }  
}  

void peek()  
{  
    struct node *head;  
    head = front;      
    if(front == NULL)  
    {  
        printf("\nNO data\n");  
    }  
    else  
    {   printf("\nElements:\n");  
        while(head != NULL)   
        {  
            printf("\n%d\n",head-> data);  
            head= head-> next;  
        }  
    }  
}  

int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice from 1 to 4:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enQueue();
            break;

            case 2:
            deQueue();
            break;

            case 3:
            peek();
            break;

            case 4:
            exit(0);

            default:
            printf("Wrong choice \n");
        }
    } 
}