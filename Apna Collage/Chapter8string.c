#include <stdio.h>
#include<string.h>

// Make a slice function:
void slice(char str[],int n,int m);

// Vowel Counter:
void vowelcounter(char str[]);

// Character checking:
void checkchar(char str[],char ch);

int main()
{

    // String = String is a collection of an characters. It is used to store more than one character.
    /* Syntax are as follow:
    char str[] = {'s','a','h','i','l','\0'}  // "\0" is used to end the string.
                        or
    char str[]="Sahil";  // No need to add "\0" in the end.

    */

    // Write a program to print all the single character from a string:
    //    char str[]="Sahil";

    //    for(int i=0;str[i]!="\0";i++){
    //         printf("%c",str[i]);
    //    }

    // String formater("%s"): It is used to take input and output the string character without using for loop:
    /*
    char str[]="Sahil";
    scanf("%s",str);
    printf("%s",str);

    */

    // Write a program to take first name as input from the user and print it as output:
    //    char str[16];
    //    printf("Please enter your first name:");
    //    scanf("%s",str);
    //     printf("%s",str);

    // String I/O functions = Now in the "%s" formater we have a drawback, it is that %s formater can only take one single world as a output, if space come it terminate.
    /* Then we use three functions for input and output:
    1. gets(string_name) = It is used to take a input.
    2. fgets(string_name,quantity,filename) = It is also used to take input from the user.
    3. puts(string_name) = It is used to print the output.
    */

    // Write a program to take full name as a input and print it as a output:
    //    char strr[16];
    //    gets(strr);
    //    fgets(strr,16,stdin);
    //    puts(strr);

    

    // String using pointers =  Now similar to the array, string is also a self pointer.
    /* Syntax for string pointer:
    char *str = "Hello World";
    Now in this "str" can be a self variable and pointer.

    Now, there is a one difference between the pointer_string and simple string:
    pointer string can be changable but simple string cannot be changable.
    
    */

//    char *str = "Hello World";
//    puts(str);
//    str = "Hello";  // It can be changable.
//    puts(str);

//    char strr[] = "Hello World";
//    puts(strr);
//    strr ="Hello"; // It cannot be changable.


    // 1. Write a program to take name as input from the user and you have to print the lenght of the name:
    // char arr[100];
    // fgets(arr,100,stdin);
    // int lenght = 0;
    // for(int i=0;arr[i] != '\0';i++){
    //     lenght++;
    // }
    // printf("Your name lenght is:%d",lenght-1);


    // String library functions = If you want to use the string functons then you have to include the <string.h> header file.
    /* Some of the string functions:

    1. strlen(string_name) = It is used to find the lenght.
    2. strcpy(string_you_want_to_change,value_of_string_you_want_to_copied) = It is used to change the value of one string to the other.
    3. strcat(firststr,secondstr) = It is used to concatenate the two string.
    4. strcmp(firststr,secondstr) = It is used to compare the of two string;
    if "0" means both are string are same,if "positive value" it means first string is grather than second, if "negative value" means second string is grather than first.
    
    */

    // 2. Write a program to take input from the user by using "%c":
//    char arr[100];
//    char ch;
//    int i=0;
//    while (ch != '\n')
//    {
//     scanf("%c",&ch);
//     arr[i] = ch;
//     i++;
//    }
//    arr[i] = '\0';
//    puts(arr);

   // 3. Write a program to enter a password from the user and by using "salting" add "123" in them and print the new password:

//    char pass[100];
//    printf("Please enter your password:");
//    scanf("%c",pass);
//    char salt[] = "123";
//    char newpass[200];
//    strcpy(newpass,pass);
//    strcat(newpass,salt);
//    puts(newpass);

    // 4. Write a program to make a slice functions:

    // char str[100];
    // int n,m;
    // printf("Please enter your string:");
    // fgets(str,100,stdin);
    // printf("Enter index for slicing,start point and the end point:");
    // scanf("%d%d",&n,&m);
    // slice(str,n,m);

    // 5. Write a program to count the occurance of vowels:
    // char str[100];
    // printf("Please enter any word:");
    // fgets(str,10,stdin);
    // vowelcounter(str);

    // 6. Write a program to check if a given character is present in a string or not:
    char str[]  = "Hello World";
    char ch;
    printf("Please enter any character to check:");
    scanf("%c",&ch);
    checkchar(str,ch);


   

    return 0;
}


// Make a slice function:
void slice(char str[],int n,int m){

    int j=0;
    char sliced[10];
    for(int i =n;i<=m;i++,j++){
        sliced[j] = str[i];
    }
    sliced[j] = '\0';
    puts(sliced);
}

// Vowels counter:
void vowelcounter(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if (str[i]=='a'|| str[i] == 'e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    printf("Count of vowels is:%d\n",count);

}

// Character checking:
void checkchar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == ch){
            printf("Yes");
            return;
        }
    }
    printf("No");
}