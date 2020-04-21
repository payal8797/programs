#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node* insert(node* head,int data,int index,int n)
{
    node* newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL)
    {
        printf("Error!!");
        return head;
    }

    newNode->data=data;
    newNode->next=NULL;
    if(head->next=NULL)
    {
        head->next=newNode;
    }
    else if(index==1)
    {
        newNode->next=head->next;
        head->next=newNode;
    }

    else if(index>n)
    {
        node* temp=(node*)malloc(sizeof(node));
        if(temp==NULL)
        {
            printf("Error!!");
            return head;
        }
        temp->next=head->next;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        } 
        temp->next=newNode;
        temp=newNode;
    }
    
    else    
    {
        node* temp=(node*)malloc(sizeof(node));
        if(temp==NULL)
        {
            printf("Error");
            return head;
        }
        temp=head->next;
        while(n>2)
        {
            temp=temp->next;
            n--;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        temp=newNode;
    }
    return head;
    
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
        printf("\nmenu\n0.exit\n1.insert\n2.display\nEnter ur choice:");
        scanf(" %d",&choice);
        switch (choice)
        {
            case 0:printf("exit");
                    free(head);
                    break;
            case 1:
                printf("Enter data:");
                scanf(" %d",&data);
                printf("Enter index:");
                scanf(" %d",&index);
                head=insert(head,data,index,n);
                break;
            case 2:
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