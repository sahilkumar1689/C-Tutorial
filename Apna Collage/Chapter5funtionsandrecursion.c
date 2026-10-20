#include <stdio.h>

// 1. Write a function to print the "Hello World" and "Good Bye"
void hey();
void gd();

// 2. Write a function to print the "Namastey" if your are indian and "Bonjour" if your are french.
void manners();

// 3. Sum of two numbers:
int sum(int a, int b);

// 4. Write a function to print the table of a given number:
void table(int n);

// Recursion:
//  1. Sum of n natual number:
int sumn(int count);

// 2. Factorial of a number:
int fact(int n);

// 3. convert into fahrenite:
float farh(float a);

// 4. Calculate the percentage:
int percent(int a, int b, int c);

// 5. Fibonacci series:
int fibo(int n);

// Fibonacci using iterative method:
int fiboi(int n);

int main()
{

    // Functions : Function is a block of code that performs particular set of code.
    // Advantage of function:
    // 1. It can be used multiple of times.
    // 2. It increases code reuseability.

    /* Syntax of function are as follow:
    It is a three step process to declare a funtion:
    step1. Declare a function name before the int main(){} function.
    e.g.  #include<stdio.h>

    void printh();  // It is called declaration of a function.

    int main(){

    }

    step2: Write the function defination/inside code after the int main(){} function.
    e.g. #include<stdio.h>
    void printh();  // Declaration of a function.

    int main(){

    }

    // Defination of a function:
    void printh(){
        printf("Hello World");
    }

    step3: Use the function in your main function:
    e.g. #include<stdio.h>
    void printh();  // Declaration of a function.

    int main(){
        printh(); // Use the function.
        return 0;
    }

    // Defination of a function:
    void printh(){
        printf("Hello World");
    }
    */

    // 1. Write a function to print the "Hello World" and "Good Bye".

    // hey();
    // gd();

    // 2. Write a function to print the "Namastey" if your are indian and "Bonjour" if your are french.
    // manners();

    // 3. Write a function to print sum of two numbers:
    // int a,b;
    // printf("Please enter two value a and b:");
    // scanf("%d%d",&a,&b);
    // int s=sum(a,b); // These are called the arguments.
    // printf("Sum of %d and %d is:%d\n",a,b,s);

    // 4. Write a function to print the table of a given number:
    // int n;
    // printf("Please enter a number to print the table of them:");
    // scanf("%d",&n);
    // table(n);

    // Recursions = When a function call itself's,it'scalled a recursion.

    // 1. Write a program print the sum of first n natural number: formula: (n-1)+n
    // int n;
    // printf("Please enter a number to find the sum:");
    // scanf("%d",&n);
    // printf("Sum is:%d\n",sumn(n));

    // 2. write a program to print the factorial of a given number: formula: (n-1)*n
    // int n;
    // printf("Please enter a number to find the factorial of them:");
    // scanf("%d",&n);
    // printf("Factorial of a given number is:%d\n",fact(n));

    // 3. Write a program to convert celsius into fahrenheit:formula:f=(c*9/5)+32
    // float a ;
    // printf("Please enter any celcius temperature to convert into fahrenheit:");
    // scanf("%f",&a);
    // float f = farh(a);
    // printf("%f celcius in fahrenite is:%f\n",a,f);

    // 4. Write a program to calculate the percentage of a student in three subjects:
    // int a,b,c;
    // printf("Please enter the marks of three sunject to claculate:");
    // scanf("%d%d%d",&a,&b,&c);
    // int totalp = percent(a,b,c);
    // printf("Percentage of the student will be:%d\n",totalp);

    // 5. Write a program to calculate the fibonacci sequence of nth term:formula:f = (n-1)+(n-2)
    // int n ;
    // printf("Please enter the number to set the sequence of fibonacci series:");
    // scanf("%d",&n);

    // To find the nth term:
    // int fs = fibo(n);
    // printf("Fibonacci series nth term will be:%d",fs);

    // To find the series and also used in iterative method:
    // for(int i=0;i<n;i++){
    //     printf("%d, ",fibo(i));
    // }

    // To find the recusive function with the help of interative method:
    int n;
    printf("Please enter the number to find the fibonacci series:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fiboi(i));
    }

    

    return 0;
}

// 1. Write a function to print the "Hello World" and "Good Bye".
void hey()
{
    printf("Hello World\n");
}

void gd()
{
    printf("Good Bye\n");
}

// 2. Write a function to print the "Namastey" if your are indian and "Bonjour" if your are french.
void manners()
{
    char ch;
    printf("Please enter 'i' if you are indian and 'f'if you are french:");
    scanf("%c", &ch);
    if (ch == 'i')
    {
        printf("Namastey");
    }
    else if (ch == 'f')
    {
        printf("Bonjour");
    }
    else
    {
        printf("Please enter the valid character.");
    }
}

// 3. Sum of two numbers:
int sum(int a, int b)
{
    return a + b;
}

// 4. Table print:
void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d =%d\n", n, i, n * i);
    }
}

// Recursion;
// 1. Sum of n natual number:
int sumn(int count)
{
    if (count == 1)
    {
        return 1;
    }
    int s = sumn(count - 1);
    int Totalsum = s + count;
    return Totalsum;
}

// 2. Factorial of a number:
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fa = fact(n - 1);
    int fa1 = fa * n;
    return fa1;
}

// 3. convert into fahrenite:
float farh(float a)
{
    float fa = a * (9.0 / 5.0) + 32;
    return fa;
}

// 4. Calculate the percentage:
int percent(int a, int b, int c)
{
    int per = (a + b + c) / 3;
    return per;
}

// 5. Fibonacci series nth term:
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fs1 = fibo(n - 1);
    int fs2 = fibo(n - 2);
    int fs = fs1 + fs2;
    return fs;
}

// Fibonacci using iterative method:
int fiboi(int n)
{
    int first = 0, second = 1, result;
    if (n == 0)
    {
        return first;
    }
    else if (n == 1)
    {
        return second;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            result = first + second;
            first = second;
            second = result;
        }
    }
    return result;
}
