#include <stdio.h>
#include<stdlib.h>
#define MAX 100

void insert();
void delete();
void display();

int queue[MAX];
int rear = - 1;
int tail = - 1;
void insert()
{
    int i;
    if (tail==- 1)
    {
        tail=0;
    }
    printf("Insert an element in queue : ");
    scanf("%d", &i);
    rear = rear + 1;
    queue[rear] = i;
}

void delete()
{
        printf("Element deleted from queue is : %d\n", queue[tail]);
        tail = tail + 1;
}

void display()
{
    int i;
    if (tail == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (i = tail; i <= rear; i++)
            printf("%d",queue[i]);
        printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element in the queue \n");
        printf("2.Delete element from the queue \n");
        printf("3.Display all the elements of the queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    } 
}