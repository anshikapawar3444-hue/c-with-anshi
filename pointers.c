// Pointers = a variable that stores the memory address of another variable 

// Syntax , * = value at address , & = address of operstor 

// int age = 22;
// int *ptr = &age ;
// int _age = *ptr;

#include <stdio.h>

int main () {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n",_age);
    return 0;
}