#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*left;
    struct node*right;
}node;

node* newnode(int data)
{
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;  
    return newnode;  
}

node* insert(node* root,node* newnode)
{
    node* temp=(node*)malloc(sizeof(node));
    temp=root;
    if(root==NULL)
    {
        root=newnode;
    }
    if(root->left==NULL)
    {
        root->left=newnode;
    }
    if(root->right==NULL)
    {
        root->right=newnode;
    }
    if(root->left!=NULL && root->left!=NULL)
    {
        temp=temp->left;
        if(temp->left!=NULL)
        {
            temp->left=newnode;
        }                              
    }
}

int power(int k,int h)
{
    int i,n=1;
    for(i=1;i<=h;i++)
    {
        n=k*n;
    }
    return n;
}

int main()
{
    node* root=(node*)malloc(sizeof(node));
    root==NULL;
    int h,k,data;
    scanf("%d",&k);
    scanf("%d",&h);
    int m=power(k,h)-1
    for(i=0;i<m;i++)
    {
        printf("Enter data:");
        scanf("%d",&data);
        root=insert(root,newnode(data));
    }
    //printf("%d",power(k,h+1));
}



