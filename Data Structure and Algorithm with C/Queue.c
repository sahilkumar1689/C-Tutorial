#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int size;
    int front;
    int rare;
    int *arr;
}queue;


// isfull() function;
int isfull(queue *ptr){
    if(ptr->rare == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

// isempty() function:
int isempty(queue *ptr){
    if(ptr->rare == -1){
        return 1;
    }
    else{
        return 0;
    }
}

// enqueue() function:
void enqueue(queue *ptr,int value){
    if (isfull(ptr))
    {
        printf("Queue Overflow.");
    }
    else{
        ptr->rare++;
        ptr->arr[ptr->rare] = value;
        printf("Enqueued successfull.");
    }  
}


// dequeue() function;
void dequeue(queue *ptr){
    int val1;
    if (isempty(ptr))
    {
        printf("Queue Underflow.");
    }
    else{
        ptr->front++;
        val1 = ptr->arr[ptr->front];
        printf("Your %d element is dequeue.\n",val1);
    }
}

int main(){

    // Oueue = Queue is also called the first-in-first-out system. It is the liner list in which insertion can be done on the one side called rare and deletion can be done on the other side called front.
    int val = 2;
    queue *q = (queue*)malloc(sizeof(queue));
    q->size = 10;
    q->front = -1;
    q->rare = -1;
    q->arr = (int*)malloc(q->size*(sizeof(int)));

    printf("isfull funtion:%d\n",isfull(q));
    printf("isempty function:%d\n",isempty(q));
    enqueue(q,val);
    printf("\nisfull funtion:%d\n",isfull(q));
    printf("isempty function:%d\n",isempty(q));

    dequeue(q);

    
    return 0;
}