#include <stdio.h>

int main()
{
    // printf("Hello World");

    // Variables = Variables is the name of the memory location which is used to store some data.
    // Rule for the variable:
    /*
    1. First word can be a alphabet or can be a "_" undersore.
    2. No space or comma can be appear between the variable.Only undersore can be appear.
    */

    /*Data Types: Basically,data types are used to described the type of the data .There are many types of data types in c languare.int,float,char,etc.
    
    We can also use some string formater,some of them are:\n,\t,etc.

    */
   // Program to find the area of a circle:
   float radius;
   printf("Please enter the radius:");
   scanf("%f",&radius);
   printf("Area of the circle will be:%f",3.14*radius*radius);


    return 0;
}