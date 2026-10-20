#include <stdio.h>

int main()
{

    // Loops: They are used to repeat some part of the program.
    //  There are three types of loops: for loop, while loop, do-while-loop.
    //  For loop: Syntax for "For loop" are as follow:
    /*
    for(initialization;conditions;updation){
        // do something
    }
    */
    //    for(int i=1;i<=5;i++){
    //     printf("Hello World\n");
    //    }

    // Write a program to print 1 to 10 numbers:
    // for(int i=1;i<=10;i++){
    //     printf("%d\n",i);
    // }

    // Write a program to print 0 to 10 numbers:
    // for (int i=0;i<=10; i++)
    // {
    //     printf("%d\n",i);
    // }

    // Write a program to print a to z characters:
    // for(char ch='a';ch<='z';ch++){
    //     printf("%c\n",ch);
    // }

    // While loop:Syntax are as follow:
    /*
    initializations;
    while(conditions){
        // do something
        updation;
    }
    */

    // Write a program to print hello world 5 times:
    //    int i=1;
    //    while (i<=5)
    //    {
    //     printf("Hello World\n");
    //     i++;
    //    }

    // 1. Print a number from 0 to n, if n is given by a user:Using for loop and while loop
    //  int i ;
    //  printf("Please Enter a number:");
    //  scanf("%d",&i);
    //  int a=0;
    //  while(a<=i){
    //      printf("%d\n",a);
    //      a++;
    //  }

    // for(a;a<=i;a++){
    //     printf("%d\n",a);
    // }

    // Do-While loop:syntax for do-while loop are as follow:
    /*
    initializations;
    do{
        // do something
        updations;
    }while(conditions);
    */

    //    int i=1;
    //    do{
    //     printf("%d\n",i);
    //     i++;
    //    }while (i<=5);

    // 2. Print the sum of the number given by the users after that also reverse.
    // Using two loops:
    // int n;
    // printf("Please enter a number:");
    // scanf("%d", &n);
    // int sum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    //     printf("Without reverse:%d\n",i);
    // }
    // printf("Your sum will be:%d\n", sum);

    // int sum2 = 0;
    // for (int j = n; j >= 1; j--)
    // {
    //     sum2 += j;
    //     printf("With reverse:%d\n", j);
    // }
    // printf("Sum will be:%d",sum2);

    // Using one loop:
    // int n ;
    // printf("Please enter a number:");
    // scanf("%d",&n);
    // int sum1 = 0,sum2 = 0;

    // for(int i=1,j=n;i<=n && j>=1;i++,j--){
    //     sum1 += i;
    //     sum2 += j;
    //     printf("without reverse%d\n",i);
    //     printf("withreverse%d\n",j);
    // }
    // printf("sum without reverse will be:%d\n",sum1);
    // printf("sum with reverse will be:%d\n",sum2);

    // 3. Write program to print a table of any number given by the user:
    // int n ;
    // printf("Please enter a number to print a table of them:");
    // scanf("%d",&n);

    // printf("Table of %d are as follow:\n",n);

    // for(int i = 1;i<=10;i++){
    //     printf("%d x %d =%d\n",n,i,n*i);
    // }

    // 4.Take a input from the user till they enter any odd number:

    // int a ;
    // do{
    //     printf("Please enter a number:");
    //     scanf("%d",&a);
    //     printf("You enter:%d\n",a);
    //     if(a %2 != 0){
    //         printf("oops! you enter a odd number.");
    //         break;
    //     }
    // }while(1);

    // 5. Take a number from the user till they enter a number which is multiple of 7:

    // int a;
    // do{
    //     printf("Please enter a number:");
    //     scanf("%d",&a);
    //     printf("You enter:%d\n",a);

    //     if(a%7 ==0){
    //         printf("oops! you enter a number which is multiple of 7.");
    //         break;
    //     }
    // }while(1);

    // 6.Print all the odd number from 5 to 50:
    // printf("All the odd numbers from 5 to 50 are as follow:\n");
    // for(int i = 5;i<=50;i++){
    //     if(i%2 ==0){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }

    // 7. Write a program to find a factorial of a given number:
    // int n;
    // printf("Please enter a number to find a factorial of them:");
    // scanf("%d",&n);
    // int fact = 1;
    // if(n==0){
    //     printf("Factorial of %d is:1\n",n);
    // }
    // else if(n==1){
    //     printf("Factorial of %d is:1\n",n);
    // }
    // else{
    //     for(int i=1;i<=n;i++){
    //         fact *= i;
    //     }
    //     printf("Factorial of %d is:%d\n",n,fact);
    // }

    // 8. Print a table of a given number but in reverse order;
    // int n;
    // printf("Please enter a number:");
    // scanf("%d", &n);
    // printf("Table of a %d in reverse order are as follow:\n", n);

    // for (int i = 10; i >= 1; i--)
    // {
    //     printf("%d x %d =%d\n", n, i, n * i);
    // }

    // 9.Print the sum of all number from 5 to 50:

    // int sum=0;
    // for(int i=5;i<=50;i++){
    //     sum += i;
    // }
    // printf("Sum of the 5 to 50 will be:%d\n",sum);

   int fact = 1;
   int a;
   printf("Enter any number to find the factorial of that:");
   scanf("%d",&a);
   if (a == 0)
   {
    printf("Factorial of the %d is:1\n",a);
   }
   else if (a == 1)
   {
    printf("Factorial of the %d is:1\n",a);
   }
   else
   {
    for (int i = 1; i <=a; i++)
    {
        fact *= i;
    }
    printf("Factorial of the %d is:%d\n",a,fact);
   }
   
   
    
    

    return 0;
}