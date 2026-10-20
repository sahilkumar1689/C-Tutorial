#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Dynamic Memory Allocation = It is a way to allocate the memory of a data structure in the runtime. To use the dynamic memory allocation in the code you need to add the header file <stdlib.h>
    /* Some function are used to allocate the memory in the runtime:
    1. malloc() = It stand for Memory Allocation.It takes number of bytes to be allocated and returns a pointer of type void.
    // Syntax are as follow:
    ptr = (int*)malloc(5*sizeof(int)); 
                        (number of bits)

    2. calloc() = It stand for Continous Allocation.It is similar to the malloc but small difference in the syntax.
    // Syntax are as follow:
    ptr = (int*)malloc(5,sizeof(int));
                        (number of block),(data type)

    3. free() = It stand for free.It is used to free the memory, which is allocated by the malloc() and calloc();
    // Syntax are as follow:
    free(ptr);

    4. realloc = It stand for re-allocation.It is used to reallocate(increase and decrease) the memory using the same pointer and size.
    // Syntax are as follow:z
    ptr = realloc(ptr,new_size)
    */

    // Use malloc to get the memory dynamically;
    //    int *ptr;
    //    ptr = (int*)malloc(5*sizeof(int));

    //    // Now you can use the ptr as a array of size 5:
    //    ptr[0] = 1;
    //    ptr[1] = 2;
    //    ptr[2] = 3;
    //    ptr[3] = 4;
    //    ptr[4] = 5;

    //    for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);
    //    }

    // Write a program to store the 5 prices:
    // float *ptr;

    // ptr = (int*)malloc(5*sizeof(float));

    // ptr[0] = 1.0;
    // ptr[1] = 2.0;
    // ptr[2] = 3.0;
    // ptr[3] = 5.0;
    // ptr[4] = 5.0;

    // for(int i=0;i<5;i++){
    //     printf("%f\n",ptr[i]);
    // }

    // 




    return 0;
}