#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node* push (node* head,int data,int n)  
{
    node* newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("Error");
        return head;
    }
    newNode->data=data;
    newNode->next=NULL;
    if(head->next==NULL)
    {
        head->next=newNode;
    }
    else
    {
        node* temp=(node*)malloc(sizeof(node));
        if(temp==NULL)
        {
            printf("Error");
            return head;
        }
        temp-> next=head->next;
        head->next=temp;
        temp=newNode;
    }
}  
  
node* pop(node*head)  
{  
   if(head->next==NULL)
    {
        return head;
    }

    else
    {
        head->next=head->next->next;
        printf("Element popped");
    } 
}  

void display(node*head)
{
    node* temp=(node*)malloc(sizeof(node));
        if(temp==NULL)
        {
            printf("Error");
            return;
        }
        temp=head->next;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return;
}


int main()
{
    int choice,n,data,index;
    node* head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("Error");
        return -1;
    }
    head->next=NULL;
    do 
    {
        printf("\nmenu\n0.exit\n1.Push\n2.Pop\n3.Display\nEnter ur choice:");
        scanf(" %d",&choice);
        switch (choice)
        {
            case 0:printf("exit");
                    free(head);
                    break;
            case 1:
                printf("Enter data:");
                scanf(" %d",&data);
                head=push(head,data,n);
                break;
            case 2:
                pop(head);
                if(head==NULL)
                {
                    printf("\nList is empty.");
                }
                break;
            case 3:
                display(head);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }
    while(choice!=0);
    return 0;
}