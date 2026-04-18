// Pointers = a variable that stores the memory address of another variable. 

// Syntax , * = value at address(indirection) , & = address of operator. 

// int age = 22;
// int *ptr = &age ;
// int _age = *ptr;

// #include <stdio.h>

// int main () {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;
//     printf("%d\n",_age);
//     return 0;
// }
// output = 22

// declaring pointers
// int *ptr ;
// char *ptr ;
// float *ptr ;

// format specifier 
// %u = unsigned int , %p = hexadecimal value 

// printf("%p",&age); 
// printf("%p",ptr);
// printf("%p",&ptr);

// #include <stdio.h>

// int main () {
//     int age = 22;
//     int *ptr = &age;
//     printf("%p\n",&age);
//     printf("%u\n",&age);
//     printf("%p\n",ptr);
//     printf("%u\n",ptr);
//     printf("%p\n",&ptr);
//     printf("%u\n",&ptr);
//     return 0;
// }

// format specifier
// printf("%d",age);
// printf("%d",*ptr);
// printf("%d",*(&age));

// #include <stdio.h>

// int main () {
//     int age = 22;
//     int *ptr = &age;
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int x,*ptr;
//     ptr = &x;
//     *ptr = 0; // x = 0
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     *ptr += 5;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     (*ptr)++;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     (*ptr)--;
//     printf("x = %d\n",x);
//     return 0;
// }

// Pointer to pointer = a variable that stores the memory address of another pointer .

// syntax :
// int **pptr , char **pptr , float **pptr

// #include <stdio.h>

// int main () {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d\n",**pptr);
//     return 0;
// }

// Pointers in functions call.
// it is of two types:
// Call by value = We pass value of variable as argument . 
// Call by reference = We pass address of variable as argument .

// example of call by value

// #include <stdio.h>
// void square (int n);
// int main () {
//     int no = 4;
//     square(no);
//     printf("number = %d\n",no); // output = 4
//     return 0;
// }
// void square (int n) {
//     n = n*n;
//     printf("square of number = %d\n",n);
// }

// example of call by reference 

// #include <stdio.h>
// void _square (int *n);
// int main () {
//     int no = 4;
//     _square(&no);
//     printf("number = %d\n",no); // output = 16
//     return 0;
// }
// void _square (int *n) {
//     *n = (*n)*(*n);
//     printf("square of number = %d\n",*n);
// }

// QUES 1 swap two numbers 

// #include <stdio.h>
// void swap(int *a,int *b);
// int main () {
//     int a = 40,b=50;
//     printf("Before swapping = %d %d\n",a,b);
//     swap (&a,&b);
//     printf("%d %d\n",a,b);
//     return 0;
// }
// void swap (int *a,int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("After swapping = %d %d\n",*a,*b);
// }

// QUES 2 Will the address output be same ?

// #include <stdio.h>
// void printAddress (int *n);
// int main () {
//     int n = 4;
//     printAddress(&n);
//     printf("address of n = %u\n",&n);
//     return 0;
// }
// void printAddress (int *n) {
//     printf("address of n = %u\n",&n);
// }

// QUES 3 sum,prod,avg return in main function. (these can be done by the help of pointers) 
// #include <stdio.h>
// void work(int a ,int b,int *sum,int *prod,int *avg);

// int main () {
//     int a = 3,b = 5;
//     int sum , prod , avg;
//     work(a,b,&sum,&prod,&avg);
//     printf("sum = %d,prod = %d,avg = %d\n",sum,prod,avg);
//     return 0;
// }
// void work(int a ,int b,int *sum,int *prod,int *avg) {
//     *sum = a+b;
//     *prod = a*b;
//     *avg = (a+b)/2;
// }

// QUES 4 max b/w two no.

// #include <stdio.h>
// void max(int *a,int *b);
// int main () {
//     int a = 45,b = 4;
//     max(&a,&b);
//     return 0;
// }
// void max(int *a,int *b) {
//     if (*a>*b) 
//     printf("%d is greater than %d\n",*a,*b);
//     else 
//     printf("%d is greater than %d\n",*b,*a);
// }

#include <stdio.h>

int main () {
    
    return 0;
}