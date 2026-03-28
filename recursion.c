// RECURSION

// #include <stdio.h>

// void printhw (int count);
// int main () {
//     printhw(5);
//     return 0;
// }
// void printhw (int count) {
//     if (count == 0) 
//     return ;
//     printf("hello world\n");
//     printhw(count-1);
// }

// QUES 1 sum of first n natural numbers

// #include <stdio.h>
// int sum(int n);

// int main () {
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",sum(n));
//     return 0;
// }
// int sum(int n) {
//     if (n==1)
//     return 1; // base case
//     return n+sum(n-1);
// }

// QUES 2 factorial using recursion

// #include <stdio.h>

// int fac(int n);
// int main () {
//     printf("%d\n",fac(5));
//     return 0;
// }
// int fac(int n) {
//     if (n==0)
//     return 1;
//     return n*fac(n-1);
// }

// QUES 3 Write a program in C to print the first 50 natural numbers using recursion.
// #include <stdio.h>
// void printNo(int n) {
//     if (n==0)
//     return;
//     printNo(n-1);
//     printf("%d ",n);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     printNo(n);
//     return 0;
// }

// QUES 4 Write a program in C to calculate the sum of numbers from 1 to n using recursion.

// #include <stdio.h>
// int sum(int n) {
//     if (n==0)
//     return 0;
//     return n+sum(n-1);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     int a = sum(n);
//     printf("The sum of numbers from 1 to %d :\n%d\n",n,a);
//     return 0;
// }

// QUES 5 Write a program in C to print the Fibonacci Series using recursion.

// #include <stdio.h>
// int fib(int n) {
//     if (n==0)  {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<=n;i++) {
//         printf("%d ",fib(i));
//     }
//     return 0;
// }

// QUES 6 Write a program in C to count the digits of a given number using recursion.

