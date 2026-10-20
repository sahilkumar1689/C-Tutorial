#include <stdio.h>

// 1. Traversing function:
void traversearr(int *ptr, int n);

// 2. Linear Searching function:
int search(int *ptr, int n, int k);

// 2. Binary Searching function:
int binarysrc(int arr[], int n, int item);

// 3. Insertion function:
int insertionarr(int *arr, int size, int capacity, int element, int index);

// 4. Deleteion Function:
void deletearr(int *arr,int size,int index);

// 5(1). Buuble Sort:
void bubbulesort(int *arr,int n);

// 5(2). Insertion Sort:
void insertionsort(int *arr,int n);

// 5(3). Selection sort:
void selectionsort(int *arr,int n);


int main()
{

    // 1. Traversing  = Traversing is the process to access all the elements of the array,with the help of its corresponding index values.

    // int arr[5];
    // for(int i=0;i<5;i++){
    //     printf("Please enter any value:");
    //     scanf("%d",&arr[i]);
    // }
    // traversearr(&arr[0],5);

    // 2. Searching = Searching is a process to find the location of any particular item in the linear array.
    /* Search are of two types:1.Linear Search 2. Binary Search*/

    // 1. Linear Search:It is used when no information about the array will be given only size will be given.
    // int arr[5];
    // int k;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter any number to store in the array:");
    //     scanf("%d", &arr[i]);
    // }
    // printf("Enter the number you want to find in the array:");
    // scanf("%d", &k);
    // printf("%d\n",search(&arr[0], 5, k));

    // 2. Binary Search = Binary search is used when additional information about the array will be given i.e. when elements of array are sorted.

    // int arr[5];
    // int k;
    // for(int i=0;i<5;i++){
    //     printf("Entre any number to stored in the array:");
    //     scanf("%d",&arr[i]);
    // }
    // printf("Entre element you want to find:");
    // scanf("%d",&k);
    // printf("Your element %d is present at %d position.\n",k,binarysrc(arr,5,k));

    // 3. Insertion = Insertion is the process to insert the element in the array.
    // int arr[10] = {1, 2, 3, 4, 5};
    // int size = 5, capacity = 10;
    // int element, index;
    // printf("Please enter the number and the position you want to insert in the array:");
    // scanf("%d%d", &element, &index);

    // int ia = insertionarr(&arr[0], size, capacity, element, index);
    // if (ia == -1)
    // {
    //     printf("Insertion unssuccessfull");
    // }
    // else if (ia == 1)
    // {
    //     printf("Insertion successfull");
    //     for (int i = 0; i < (size + 1); i++)
    //     {
    //         printf("\t%d\t", arr[i]);
    //     }
    // }

    // 4. Deletion = Deletion is the process to remove any element from the array.
    // int arr[10] = {1,2,3,4,5};
    // int size =5;
    // int index;
    // printf("Please enter the index value which you want to be deleted:");
    // scanf("%d",&index);
    // deletearr(&arr[0],size,index);
    // for(int i=0;i<(size-1);i++){
    //     printf("%d\t",arr[i]);
    // }
    
    // 5.Sorting = Sorting is the process to arrange the elements of the array in some logical order.

    // 5(1). Bubble sort = Bubble sort goes element by element to pass.

    // int arr[] = {2,5,7,8,4,3,9,1};
    // printf("Before sort\n");
    // traversearr(arr,8);
    // bubbulesort(&arr[0],8);
    // printf("\nAfter sort\n");
    // traversearr(arr,8);

    // 5(2). Insertion sort = It is used to sort the array by insertion.

    // int arr[] = {2,5,7,8,4,3,9};
    // printf("Before sort\n");
    // traversearr(arr,7);
    // insertionsort(&arr[0],7);
    // printf("\nAfter sort\n");
    // traversearr(arr,7);

    // 5(3). Selection Sort = It is used to sort an array by selecting the smallest of all from the unsorted part and replacing it with its final position.

    int arr[] = {2,5,7,8,4,3,9};
    printf("Before sort\n");
    traversearr(arr,7);
    selectionsort(&arr[0],7);
    printf("\nAfter sort\n");
    traversearr(arr,7);



    return 0;
}

// 1. Traversing function:
void traversearr(int *ptr, int n)
{
    // int total = 0;
    // int fact = 1;
    for (int i = 0; i < n; i++)
    {
        // total += ptr[i];
        printf("\t%d ",ptr[i]);
    }
    // for (int i = n; i >= 1; i--)
    // {
    //     fact *= i;
    // }
    // int avg = (total) / n;
    // printf("Also there sum is:%d\n", total);
    // printf("Also there average is:%d\n", avg);
    // printf("Also there factorial is:%d\n", fact);
}

// 2. Linear Searching function:
int search(int *ptr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] == k)
        {
            printf("Present at position:%d\n", i);
        }
    }
    return -1;
}

// 2. Binary Seaching:
int binarysrc(int arr[], int n, int item)
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == item)
        {
            return mid;
        }
        if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

// 3. Insertion function:
int insertionarr(int *arr, int size, int capacity, int element, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = (size - 1); i >= (index - 1); i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index - 1] = element;
    size++;
    return 1;
}

// 4. Deleteion Function:
void deletearr(int *arr,int size,int index){
    for(int i=index;i<(size-1);i++){
        arr[i] =arr[i+1];
    }
    size--;
}


// 5(1). Buuble Sort:
void bubbulesort(int *arr,int n){
    int temp;
    int  isrepeat = 0;
    for (int i = 0; i < n-1; i++)
    {   
        isrepeat =1;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              isrepeat = 0;
            }  
        }
        if (isrepeat)
        {
            return;
        } 
    }
}


// 5(2). Insertion Sort:
void insertionsort(int *arr,int n){
    int key,j;
    for (int i = 0; i < n-1; i++)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j] > key)    
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// 5(3). Selection sort:
void selectionsort(int *arr,int n){
    int min,temp;
    for (int i = 0; i < n-1; i++)
    {
        min =i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }  
}