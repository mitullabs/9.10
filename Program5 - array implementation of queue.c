
//C Program to Implement a Queue using an Array
#include <stdio.h>
#define size 50
 
int queue[size];
int rear = - 1;
int front = - 1;

int main()
{
    int choice;
    printf("\nQueue Operations Using Array\n");
        printf("------------------------------\n");
		printf("1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Display \n");
        printf("4.Quit \n");
    while(choice!=4)
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            	enqueue();
            	break;
            case 2:
            	dequeue();
            	break;
            case 3:
            	display();
            	break;
            case 4:
            	printf("\nExit Point");
            	break;
            default:
            	printf("Wrong choice \n");
        } 
    } 
} 
 
void enqueue()
{
    int x;
    if (rear == size - 1)
    	printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        	/*If queue is initially empty */
        	front = 0;
        printf("Enter the element to be inserted in queue : ");
        scanf("%d", &x);
        rear++;
        queue[rear] = x;
    }
}
 
void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front++;
    }
} 
 
void display()
{
    int i;
    if (front == -1 || front > rear)
        printf("Queue is empty \n");
    else
    {
        printf("Queue Elements : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} 
