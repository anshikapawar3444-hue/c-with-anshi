// Pointers = a variable that stores the memory address of another variable. 

// Syntax , * = value at address , & = address of operator. 

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

// Ques 1
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
// call by value and call by reference.
