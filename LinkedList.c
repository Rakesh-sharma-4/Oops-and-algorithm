#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void Print()
{
    struct Node* temp1=head;
    printf("List is:");
    while(temp1!=NULL)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
       
    }
     printf("\n");
}
int main()
{
    head=NULL;
    printf("How many numbers?\n");
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the number");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
}