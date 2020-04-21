#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;



node* insert(node* head,int data)
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
    
    newNode->next=head->next;
    head->next=newNode;
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
    while(temp->next!=NULL)
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
    int choice,n,data;
    node* head=(node*)malloc(sizeof(node));
    if(head==NULL)
    {
        printf("Error");
        return -1;
    }
    head->next=NULL;
    do {
        printf("\nmenu\n0.exit\n1.insert\n2.display\n3.count\nEnter ur choice:");
        scanf("%d",&choice);
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
                head=insert(head,data);
                break;
            case 2:
                display(head);
                break;
            case 3:
                n=countNode(head);
                printf("%d",n);
                break;
        }
    }while(choice!=0);
    return 0;
}