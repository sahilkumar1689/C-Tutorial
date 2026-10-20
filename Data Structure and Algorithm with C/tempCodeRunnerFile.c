#include<stdio.h>
#include<stdlib.h>

//  Making a Blue Print of linked list:
typedef struct node
{
    int data;
    struct node *next;   
}node;  // node is the alias  of blue print name.


// traversing linked list:
void traversingll(node *ptr){
    while (ptr != NULL)
    {
        
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
    
}
int main(){

    // Linked list = It is the collection of the element in the non contiguous memery location.

    // We make the node elements with the help of alias blue print name and make dynamically memory in heap:
    node *first =(node *)malloc(sizeof(node));
    node *second =(node *)malloc(sizeof(node));
    node *third =(node *)malloc(sizeof(node));
    node *fourth =(node *)malloc(sizeof(node));

    // We set the values of each node:
    first->data = 2;
    first->next = second;

    second->data = 5;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    // travversing a node function:
    traversingll(first);





    return 0;
}