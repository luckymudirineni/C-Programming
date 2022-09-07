#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void create(int);
void display();

int main()
{
    int n;
    printf("\nenter the no of nodes: \n");
    scanf("%d", &n);
    create(n);
    printf("\ndata in the list:\n");
    display();
    return 0;
}
void create(int n)
{
    struct node *newnode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("memory allocation not possible");
        exit(0);
    }
    printf("enter the data for node 1:\t");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;
    for (i = 1; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == 0)
        {
            printf("Memory allocation not possible");
            break;
        }

        printf("enter the data for node %d:\t", i);
        scanf("%d", &data);

        newnode->data = data;
        newnode->next = temp;
        temp = newnode;
        head = temp;
    }
}
void display()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("node is empty");
    }
    temp = head;
    printf("Data:\n");
    while (temp != NULL)
    {
        printf("\t%d\n", temp->data);
        temp = temp->next;
    }
}