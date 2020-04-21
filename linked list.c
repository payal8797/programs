#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;



node* insert(node* head,int data,int index,int n)
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
            printf("Error");
            return head;
        }
        temp-> next=head->next;
        while (temp->next!=NULL)
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



node *deleteNodeByIndex(node*head,int index,int n)
{   
    if(head->next==NULL)
    {
        return head;
    }

    else if(index==1)
    {
        head->next=head->next->next;
    } 
    else if(index>n)
    {
        printf("\nIndex out of range.");
        return head;
    }
    else
    {   
        node* temp1=(node*)malloc(sizeof(node));
            if(temp1==NULL)
            {
                printf("Error");
                return head;
            }
            temp1=head->next;
            while(index>2)
            {
                temp1=temp1->next;
                index--;
            }
        node* temp2=(node*)malloc(sizeof(node));
            if(temp2==NULL)
            {
                printf("Error");
                return head;
            }
        temp2=temp1->next;
        temp1->next=temp2->next;
        temp2->next=NULL;
        free(temp2);
    }

    return head;
}



node *deleteByValue(node*head,int data)
{
    int flag=0;
    node* temp=(node*)malloc(sizeof(node));
        if(temp==NULL)
        {
            printf("Error");
            return head;
        }
    temp=head;
    while(temp->next != NULL)
    {
        if(temp->next->data==data)
        {
            node* temp1=(node*)malloc(sizeof(node));
            if(temp1==NULL)
            {
                printf("Error");
                return head;
            }
            temp1=temp->next;
            temp->next=temp1->next;
            temp1->next=NULL;
            free(temp1);
            flag=1;
        }
        if (temp->next!=NULL)
        temp=temp->next;
    }
    if (flag==0);
    printf("\nElement not found.");
    return head;
}



node *reverse(node*head)
{
    if(head)
    {
        reverse(head->next);
        printf("%d\t",head->data);
    }
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
        printf("\nmenu\n0.exit\n1.insert\n2.display\n3.count\n4.deleteByIndex\n5.deleteByValue\n6.reverse\nEnter ur choice:");
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
                head=insert(head,data,index,n);
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
                head=deleteNodeByIndex(head,index,n);
                if(head==NULL)
                {
                    printf("\nList is empty.");
                }
                break;
            case 5:
                n=countNode(head);
                printf("Enter value to be deleted:");
                scanf(" %d",&data);
                head=deleteByValue(head,data);
                if(head==NULL)
                {
                    printf("\nList is empty.");
                }
                break;
            case 6:
                head=reverse(head->next);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }while(choice!=0);
    return 0;
}