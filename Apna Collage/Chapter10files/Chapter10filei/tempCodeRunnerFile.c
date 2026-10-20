#include<stdio.h>

int main(){

    // File I/O = File is a hidden structure that need to creaded for opening a file.

    // File pointer: A file pointer that points to this structure and are used to access the files.
    /* Syntax are as follow:

    FILE *fptr:    // create a file pointer to point the file.

    1. open file:
    fptr = fopen("File_name",mode);

    2. close file:
    fclose(pointer_name);

    Different types of modes:
    1. "r" = open to read.
    2. "rb" = open to read binary.
    3. "w" = open to write.
    4. "wb" = open to write binary.
    5. "a" = open to append.

    // Reading from a file:

    char ch;
    fscanf(pointer_name,%c,&ch);

    // 

    */


    // FILE *fptr;
    // fptr = fopen("Sahil.txt","a");

    // Read from a file:
    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("%c",ch);

    // Write in a file:
    // char ch1 = 'S';
    // fprintf(fptr,"%c",ch1);

    // Append in the file:
    // char ch1 = 'a';
    // char ch2 = 'h';
    // char ch3 = 'i';
    // char ch4 = 'l';
    // fprintf(fptr,"%c",ch1);
    // fprintf(fptr,"%c",ch2);
    // fprintf(fptr,"%c",ch3);
    // fprintf(fptr,"%c",ch4);


    // We can also use the in-build function to read and write:

    // printf("%c",fgetc(fptr));    // It is used to read the file

    //fputc('K',fptr);                // It is used to read and append the file.

    // Read a full file;
    // char ch = fgetc(fptr);
    // while (ch != EOF)
    // {
    //     printf("%c",ch);
    //     ch = fgetc(fptr);
    // }
    // printf("\n");

    // Append in a file in one time:
    // char arr[16] = " is a good boy.";

    // for(int i=0;arr[i]!= '\0';i++){
    //     fputc(arr[i],fptr);
    // }
                // or
    // fprintf(fptr,"%s",arr);

    // fclose(fptr);


    // Write a program to take input students details from the users and stored in the file after that also read that file:

    // FILE *fptr;
    // fptr = fopen("Students_details.txt","w");

    // // Initialize the variable to store:
    // char arr[16];
    // int rollno;
    // float cgpa;

    // // Take input from the users:
    // printf("Please enter your name:");
    // scanf("%s",arr);
    // printf("Please enter your rollno:");
    // scanf("%d",&rollno);
    // printf("Please enter your cgpa:");
    // scanf("%f",&cgpa);

    // // Stored in the file:
    // fprintf(fptr,"Student name is:%s\n",arr);
    // fprintf(fptr,"Student rollno is:%d\n",rollno);
    // fprintf(fptr,"Student cgpa is:%f\n",cgpa);

    // fclose(fptr);

    // Read the file:
    // FILE *fptr;
    // fptr = fopen("Students_details.txt","r");
    // char ch = fgetc(fptr);
    // while (ch != EOF)
    // {
    //     printf("%c",ch);
    //     ch = fgetc(fptr);
    // }
    
    // fclose(fptr);

    /* Note : 1. To write and append in a file we use fprintf because it use all types of formaters.
    2. To read from the file we use fgets with the help of while loop.
    */

   FILE *fptr;
   fptr = fopen("Sahil.txt","r");
   int a ;
   fscanf(fptr,"%d",&a);
   int b ;
   fscanf(fptr,"%d",&b);

   fptr = fopen("Sahil.txt","w");
   fprintf(fptr,"%d",a+b);


   fclose(fptr);

    return 0;
}