#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

void table(int a){
    printf("Table of %d is:",a);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",a,i,a*i);
    }
}

int sumn(int n){
    if (n == 1){
        return 1;
    }
    int s1 = sumn(n-1);
    int total = s1+n;
    return total;
}

int fact(int a){
    if (a == 0)
    {
        return 1;
    }
    
    int a1 = fact(a-1);
    int total = a1*a;
    return total;
}
int farhneit(int a){
    return a*(9/5)+32;
}

int fibo(int n){
    int first = 0,second = 1,result;
    if(n == 0){
        return first;
    }
    else if(n==1){
        return second;
    }
    else{
        for (int i = 1; i < n; i++)
        {
            result = first +second;
            first = second;
            second = result;
        }
    }
    return result;
}

void swap(int a , int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    printf("Value of a is:%d\n",a);
    printf("Value of b is:%d\n",b);
}

void _swap(int *ptra,int *ptrb){
    int *temp;
    *temp = *ptrb;
    *ptrb = *ptra;
    *ptra = *temp;
}

void num(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter any number:");
        scanf("%d",&arr[i]);
    }
    printf("Your number is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
int main(){


    int arr[5];
    num(arr,5);
    
    
     


    return 0;
}