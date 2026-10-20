#include<stdio.h>
#include<stdlib.h>

// Making stack:
typedef struct stack{
    int size;
    int top;
    int *arr;  // It is used to make the stack dynamically.
}stack;

// Function to check the stack is full or not:
int isfull(stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1; 
    }
    else{
        return 0;
    }
}

// Function to check the stack is empty or not;
int isempty(stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

// push() function:
void push(stack *ptr,int n){

    // Push function:
    if(isfull(ptr)){
        printf("Stack Overflow.");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]= n;
        printf("Push succesfully.");
    }
}

// pop function:
void pop(stack *ptr){

    // //pop() function:
    if(isempty(ptr)){
        printf("Stack Underflow.");
    }
    else{
        int val1;
        val1 = ptr->arr[ptr->top];
        ptr->top--;
        printf("Your value %d is poped.\n",val1);
    }
}

// peek() function:
int peek(stack *ptr,int i){
    int arrind = ptr->top-i-1;
    if(arrind<0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return ptr->arr[arrind];
    }
}

// Traversing Function:
void traversingarr(int *arr,int n);

// partition function which call inside the quicksort:
int partition(int arr[],int low,int high);

// Quick sort function:
void quicksort(int arr[],int low,int high);


int main(){

    // Stack = Stack is also called last-in-first-out(LIFO) system.It is a linear system in which insertion and deletion can only be done on the one side called top.
    // Some operations on the stack:

    // 1.createstack(s) = It is used to create 's' as a  stack.
    // int val=1;
    // stack *s = (stack *)malloc(sizeof(stack));
    // s->size = 5;
    // s->top = -1;
    // s->arr = (int*)malloc(s->size*sizeof(int));

    // printf("Before isfull function:%d\n",isfull(s));
    // printf("Before Is isempty function:%d\n",isempty(s));
    // push(s,val);
    // push(s,val);
    // push(s,val);
    // push(s,val);

    // printf("\nAfter isfull function:%d\n",isfull(s));
    // printf("After isempty function:%d\n",isempty(s));


    // pop(s);

    // for (int j = 1; j < s->top+1; j++)
    // {
    //     printf("The value at position %d is %d\n",j,peek(s,j));
    // }
    
    // Quick Sort = It is a process to sort an array by taking the first elements as a refrence.
    int arr[] = {2,5,7,9,1};
    int size = 5;
    traversingarr(arr,size);
    quicksort(arr,0,size-1);
    traversingarr(arr,size);
    return 0;
}


// Traversing Function:
void traversingarr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

// partition function:
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;
    do
    {
        while (arr[i]<= pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j] = temp;
        }
        
    } while (i<j);
    
    //swap arr[low]=arr[j];
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
// Quick sort function:
void quicksort(int arr[],int low,int high){
    int partitionindex;
    if(low<high){
        partitionindex = partition(arr,low,high);
        quicksort(arr,low,partitionindex-1);
        quicksort(arr,partitionindex+1,high);
    }
}