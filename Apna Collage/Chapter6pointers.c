#include <stdio.h>

// 2. Swap two number by using call by value:
void swap(int a , int b);

// Swap using call by refrence:
void _swap(int *ptra,int *ptrb);

// 3. Find the sum, product and average:
void spa(int a,int b,int *sum,int *product,int *average);

int main()
{

    // Pointers = Pointer is a special type of variable that store the memory address of the other variable.
    // Syntax to declare a pointer:
    /*
    int age = 22; // firstly declare a variable.

    int *ptr = &age; // Now in this (*ptr) is a pointer,which store the address of the variable age.

    Note = 1. If we want to excess the address store in the pointer then we use "printf("%p",ptr or &age);"

    2. If we want to excess the value, that store in the pointer then we use "printf("%d",*ptr);"
    Now it is clear that , to excess value we use "*" sign and to excess address we not use "*" sign.
    e.g.

    int age = 22;
    int *ptr;
    ptr = &age;      // if you want to store address then no use "*" sign .
    *ptr = 23;       // if you want to store the value then use the "*" sign.
    printf("%d\n",*ptr);

   
   */

    //    int age = 19;
    //    int *ptr = &age;

    //    printf("%p\n",ptr);  // print the address.
    //    printf("%d\n",*ptr); // print the value of the address.

    // Pointer to pointer = It is used to store the address of the other pointer variable.
    /* Syntax to declare a pointer to pointer variable:
    int age = 22;
    int *ptr = &age;
    int **ptr = &ptr;  // now "**" sign is used to declare a pointer to pointer variable.
    */

    //   int age1 = 19;
    //   int *ptr1 = &age;
    //   int **ptr2 = &ptr;

    //   printf("%p\n",ptr2);  // print the address of the pointer from other pointer.

    //   printf("%d\n",**ptr2); // print the value of the pointer from the other pointer.

    // 1. Write a program to find the value of "i" by using pointer to pointer:
    // int i = 1;
    // int *ptr = &i;
    // int **ptr1 = &ptr;

    // printf("i value = %d\n",i);
    // printf("i value from pointer = %d\n",*ptr);
    // printf("i value from pointer to pointer = %d\n",**ptr1);

    // 2. Swap two numbers by using call by value and call by refrence:

    int a =3;
    int b =2;
     
    // Call by value:
    // swap(a,b);

    // call by refrence:
    _swap(&a,&b);


    // 3. Find the sum , product and average of two numbers by using functions and return the value from main functions:

    // int a=8,b=8;
    // int sum,product,average;
    // spa(a,b,&sum,&product,&average);
    // printf("Sum is:%d and product is:%d and average is :%d\n", sum, product, average);



    return 0;
}


// 2. Swap two number by using call by value:
void swap(int a , int b){
    int temp;

    temp = b;
    b = a;
    a = temp;

    printf("value of a is:%d\n",a);
    printf("value of b is:%d\n",b);

}

// Swap using call by refrence:
void _swap(int *ptra,int *ptrb){

    int *temp;
    *temp = *ptrb;  // You can also use "*" sign insted of "&" sign.
    *ptrb = *ptra;  // You can also use "*" sign insted of "&" sign.
    *ptra = *temp;  // You can also use "*" sign insted of "&" sign.

    printf("Value of a is:%d\n",*ptra);
    printf("Value of b is:%d\n",*ptrb);

}

// 3. Find the sum, product and average:
void spa(int a,int b,int *sum,int *product,int *average){

    *sum =a+b;
    *product = a*b;
    *average = (a+b)/2;

}