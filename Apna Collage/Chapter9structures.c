#include <stdio.h>
#include <string.h>

// Make a structure:
struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

// Make a structure by using typedef:
typedef struct Electronics_and_computer_engineering_students
{
    char name[100];
    int rollno;
    float cgpa;
} encstd; // It is the alise of the structure.

// 1. store the address of 5 peoples:
typedef struct address{
    int houseno;
    int galino;
    char city[16];
    char state[16];
}add;

// Using structure with the help of functions;
void makestruct(struct student *a1);

int main()
{

    // Structures = Structures is a value of the different data types.It is a user define data type.
    /* Syntax are as follow:

    // Structure definations:
    struct Student{       // Declaration
        char name[100];
        int rollno;   // These are called the properties
        float cgpa;
    };

    // Use in the main function:

    int main(){

        // Make a structure variable:

        struct student s1;  // Now in this "struct student is the declaration" and "s1" is the name.

        // Now Use all the properties by using the dot operator:
        s1.rollno = 17302112005;
        s1.cgpa = 8.5;
        strcpy(s1.name,"Sahil");   // We use strpy function because we cannot directly declare the name.


        return 0;
    }

    */

    //    struct student s1;

    //    s1.rollno = 5;
    //    s1.cgpa = 8.5;
    //    strcpy(s1.name,"Sahil");

    //    printf("Your name is:%s\n",s1.name);
    //    printf("Your roll no is:%d\n",s1.rollno);
    //    printf("Your cgpa is:%f\n",s1.cgpa);

    // Array of structures:
    /* Syntax are as follow:

    struct student ENC[10];

    ENC[0].rollno = 1;
    ENC[1].rollno = 2;
    ENC[2].rollno = 3;
    ENC[3].rollno = 4;
    ENC[4].rollno = 5;

    // Access:
    printf("Student 5th roll no is:%d\n",ECE[4].rollno);

    */

    //    struct student Enc[10];
    //    Enc[4].rollno = 5;
    //    printf("Roll no is:%d\n",Enc[4].rollno);

    // Initialization of structure in one line for only one student:
    // struct student s1 = {"Sahil",5,8.5};
    // printf("Name is:%s\n",s1.name);
    // return 0;

    // Initialization of structure in one line for array sructures:
    // struct student enc[10] = {{"sahil",5,8.5},{"akshay",1,8.8}};
    // printf("Student 1 roll no is:%d\n",enc[0].rollno);
    // printf("Student 2 roll no is:%d\n",enc[1].rollno);

    // Pointer structures:

    /* Syntax are as follow:

    struct student s1 = {"Sahil",5,8.5};

    struct student *ptr = &s1;
    printf("Your name is = %s\n",(*ptr).name);

    Note : You can also use "->" arrow function instead of this "(*ptr).name".
    e.g.
    printf("Your name is :%s\n",ptr->name);

    */

    // Use poitner to store one student data:
    //    struct student a1 = {"Sahil",5,8.5};
    //    struct student *ptr = &a1;
    //    printf("Your name with the help of pointer is :%s\n",(*ptr).name);
    //    printf("Your name with the arrow function is :%s\n",ptr->name);

    // Use pointer to store the one block of student data:
    // struct student enc[10] = {{"sahil", 5, 8.5}, {"akshay", 1, 8.8}};
    // struct student *ptr = &enc[0];
    // printf("%s\n", (ptr)->name);  // use (ptr+1)

    // Using structures to pointer functions:

    // struct student s1 = {"Sahil",5,8.5};
    // makestruct(&s1);
    // printf("Name is :%s\n",s1.name);

    // typedef = It is used to gave alise (nickname) to the structure:

    /* Syntax are as follow:

    typedef struct student{
        // properties
    } std;              // Now the "std" is the alise of the struct student.

    Hence in the main function you anly need to use the  "std" instead of "struct student".

    */

    //    encstd s1 = {"Sahil",5,8.5};
    //    printf("%s\n",s1.name);

    // 1. Write a program to store the value of (houseno,galino,city,state) for 5 peoples:

    // add kvresidence[5];   // array structure to store the 5peoples address:

    // for(int i=0;i<4;i++){
    //     printf("For person :%d\n",i+1);
    //     printf("Enter your houseno.:");
    //     scanf("%d",&kvresidence[i].houseno);
    //     printf("Please enter your galino:");
    //     scanf("%d",&kvresidence[i].galino);
    //     printf("Please enter your city:");
    //     scanf("%s",&kvresidence[i].city);
    //     printf("Please enter your state:");
    //     scanf("%s",&kvresidence[i].state);
    // }

    // for(int i=0;i<5;i++){
    //     printf("Person %d houseno is:%d\n",(i+1),kvresidence[i].houseno);
    //     printf("Person %d galino is:%d\n",(i+1),kvresidence[i].galino);
    //     printf("Person %s state is:%d\n",(i+1),kvresidence[i].state);
    //     printf("Person %s city is:%d\n",(i+1),kvresidence[i].city);
    // }


    return 0;
}

// Using structure with the help of functions;
void makestruct(struct student *a1)
{
    strcpy((*a1).name, "akshay");
    printf("Your name is:%s\n", a1->name);
}