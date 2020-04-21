#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*next;
    struct node*prev;
}node;

node* insert(node*head,int index,int data,int n)
{
    node* newNode=(node*)malloc(sizeof(node));
    if (newNode==NULL)
    {
        printf("Error");
        return head;
    }
    newNode->data=data;
    newNode->next=NULL;
    newNode->prev=NULL;
    if (head->next == NULL) {
        head->next = newNode;
        newNode->prev = head;
    }
    else if(index == 1)
    {
        newNode->next=head->next;
        newNode->prev=head;
        head->next=newNode;
        head->prev=NULL;
    }

    else if(index>n)
    {
        node* temp=(node*)malloc(sizeof(node));
        if (temp==NULL)
        {
            printf("Error");
            return head;
        }
        temp->next=head->next; 
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        temp=newNode;
    }

    else
    {
        node* temp=(node*)malloc(sizeof(node));
        if (temp==NULL)
        {
            printf("Error");
            return head;
        }
        temp->next=head->next;
        while(n>2)
        {
            temp=temp->next;
            n--;
        }
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next=newNode;
        temp=newNode;
    }
    return head;
}

node* deleteByIndex(node* head,int index,int n )
{
    if(head->next==NULL)
    {
        return head;
    }

    else if(index == 1)
    {
       node* temp=(node*)malloc(sizeof(node));
        if (temp==NULL)
        {
            printf("Error");
            return head;
        }
        temp=head->next;
        head->next=head->next->next;
        temp->next=NULL;
        temp->prev=NULL;
        free(temp); 
    }

    else if(index>n)
    {
        printf("Element not found.");
    }

    else
    {
        node* temp=(node*)malloc(sizeof(node));
        if (temp==NULL)
        {
            printf("Error");
            return head;
        }
        temp = head->next;
        while(n>2)
        {
            temp=temp->next;
            n--;
        }
        node* temp1=(node*)malloc(sizeof(node));
        if (temp1==NULL)
        {
            printf("Error");
            return head;
        }
        temp1=temp->next;
        temp1->prev=temp;
        temp1->next->prev=temp1->prev;
        temp->next=temp1->next;
        temp1->next=NULL;
        temp1->prev=NULL;
        free(temp1);
    }
    return head;
}

int countNode(node*head)
{
    int i =1;
    if (head->next == NULL) 
        return 0;
    node* temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
        printf("Error");
        return -1;
    }
    temp=head->next;
    while(temp->next != NULL)
    {
        i++;
        temp=temp->next;
    }
    return i;        
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
    do {
        printf("\nmenu\n0.exit\n1.insert\n2.display\n3.count\n4.deleteByIndex\nEnter ur choice:");
        scanf(" %d",&choice);
        switch (choice)
        {
            case 0:printf("exit");
                    free(head);
                    break;
            case 1:
                n=countNode(head);
                if(n==-1)
                {
                    return -1;
                }
                printf("Enter data:");
                scanf(" %d",&data);
                printf("Enter index:");
                scanf(" %d",&index);
                head=insert(head,index,data,n);
                break;
            case 2:
                display(head);
                break;
            case 3:
                n=countNode(head);
                printf("%d",n);
                break;
            case 4:
                n=countNode(head);
                printf("Enter index to be deleted:");
                scanf(" %d",&index);
                head=deleteByIndex(head,index,n);
                if(head==NULL)
                {
                    printf("\nList is empty.");
                }
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }while(choice!=0);
    return 0;
}