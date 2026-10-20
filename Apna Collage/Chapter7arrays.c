#include <stdio.h>

// Array usinf functions:
void pa(int arr[],int n);

// Write a program to take input from the users and store in a array then print from a array:

void arrfunc(int arr[],int n);

// Write a program to take input from the users and store in a array then print from a array by using pointers:

void arr_prt_func(int *ptr,int n);

// 1.Write a program to print the count of odd numbers in a array using functions:
int countodd(int arr[],int n);

// 2. Reverse an array:
void reversearr(int arr[],int n);

int main()
{

    // Arrays = Array is a collection of similar data types, stored at continous memory locations.
    /* Syntax to declare a array are as follow:

    data_types array_name[quantity of data] = {Enter data};
    e.g.
    int array[3] = {98,89,97};
    */

   // Write a program to take inputs from the user and stored in the array:
    // int array[3];
    // for(int i=0;i<3;i++){
    //     printf("Please enter any number:");
    //     scanf("%d",&array[i]);
    // }
    // for(int i=0;i<3;i++){
    //     printf("Your numbers is:%d\n",array[i]);
    // }
   
   // Pointer arithmetic: pointer can be increment and decrement.
   /*syntax are as follow:
   int age = 22;
   int *ptr = &age;
   ptr++;  // It can be increase by 4-bit(depending upon the data type).

    Note: 1. You can also subtract two pointer adderess.
    2. You can also compare two pointers.
   */

  // Array is a pointer:
  /*
    int *ptr = &arr[0];
        or 
    int *ptr = arr;

    Both the two codes are same, hence arr == &arr[0];

  */

    // Write a code to print the values of an array with the help of pointer:
    // int arr[] = {1,2,3};
    // int *ptr;

    // for(int i=0;i<3;i++){
    //     ptr = &arr[i];
    //     printf("%d\n",*ptr);
    //     ptr++;
    //     printf("%p\n",ptr);
    // }

    // Traversing in a array using pointers:

    // int arr[5];
    // int *ptr;

    // for(int i=0;i<5;i++){
    //   ptr=&arr[i];  // Important line in the code.
    //   printf("Please enter any number:");
    //   scanf("%d",ptr);
    // }

    // for(int i= 0;i<5;i++){
    //   ptr = &arr[i];  // Important line in the code.
    //   printf("Your numbers is:%d\n",*ptr);
    // }
                      //or
    // int arr[5];
    // int *ptr = &arr[0];  // Important line in the code.

    // for(int i=0;i<5;i++){
    //   printf("Please enter a number:");
    //   scanf("%d",ptr+i);
    // }

    // for(int i=0;i<5;i++){
    //   printf("Your number is :%d\n",*(ptr+i));
    // }

    // Array as a function argument:
    /* Syntax are as follow:

    // Function declaration:
    void pn(int arr[],int n);
            or
    void pn(int *arr,int n);

    // Function call:
    pn(arr,n);

    */

    // Write a program to print all the number in a array using functions:

    // int arr[]= {1,2,3,4,5,6};
    // pa(arr,6);  

  // Write a program to take input from the users and store in a array then print from a array:

    // int arr1[5];
    // arrfunc(arr,5);

    // Write a program to take input from the users and store in a array then print from a array by using pointers:

    // int arr[5];
    // arr_prt_func(&arr[0],5);


    // 2. 2-D Array :
    /* Syntax are as follow:
    int arr[][]={{1,2},{3,4}};
           (mxn)
           m = number of rows.
           n = number of coloumns.
    */

   // Write a program to store the three subject marks(n) for two students(m):
  //  int arr[2][3];

  // // Take input and store:
  // for(int i=0,j=0;i==0 && j<=2;j++){
  //   printf("First student please enter your marks:");
  //   scanf("%d",&arr[i][j]);
  // }
  // for(int i=1,j=0;i==1 && j<=2;j++){
  //   printf("Second student please enter your marks:");
  //   scanf("%d",&arr[i][j]);
  // }
  
  // // Print output:
  //  for(int i=0,j=0;i==0 && j<=2;j++){
  //   printf("Marks of first student is=%d\n",arr[i][j]);
  //  }
  //  printf("\n");
  //  for(int i=1,j=0;i==1 && j<=2;j++){
  //   printf("Marks of second student is=%d\n",arr[i][j]);
  //  }


   // 1.Write a program to print the count of odd numbers in a array using functions:
  //  int arr[]={1,2,3,4,5,6};
  //  printf("Count of odd numbers is:%d\n",countodd(arr,6));

  // 2. Write a function to reverse an array:formula:(n-i-1) important;
  int arr[5];

  reversearr(arr,5);






    return 0;
}

// Print number from Array using functions:
void pa(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
}

// Write a program to take input from the users and store in a array then print from a array:
void arrfunc(int arr[],int n){

  for(int i=0;i<n;i++){
    printf("Please ente any number:");
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    printf("Your number is:%d\n",arr[i]);
  }

}

// Write a program to take input from the users and store in a array then print from a array by using pointers:
void arr_prt_func(int *ptr,int n){

  for(int i=0;i<n;i++){
    printf("Please enter any number:");
    scanf("%d",ptr+i);
  }

  for(int i=0;i<n;i++){
    printf("Your number is:%d\n",*(ptr+i));
  }
}

// 1.Write a program to print the count of odd numbers in a array using functions:
int countodd(int arr[],int n){
  int count =0;
  for(int i=0;i<n;i++){
    int temp = arr[i];
    if (temp %2 !=0){
      count += 1;
    }
  }
  return count;

}

// 2. Reverse an array:
void reversearr(int arr[],int n){
  
  //Take input and store in an array:
  for(int i =0;i<n;i++){
    printf("Please enter any number:");
    scanf("%d",&arr[i]);
  }
printf("Your array without reverse is:\n");
  // Print without reverse:
 for(int i =0;i<n;i++){
    printf("%d\t",arr[i]);
  }
  // Print with reverse:
  for(int i=0;i<n/2;i++){

    int first = arr[i];
    int last = arr[n-i-1];
    arr[n-i-1] = first;       //  Important line of code.
    arr[i] = last;            //  Important line of code.
  }
printf("\n Array with reverse is:\n");
for(int i=0;i<n;i++){
  printf("%d\t",arr[i]);
}
}
