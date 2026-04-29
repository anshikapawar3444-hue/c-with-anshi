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
//     printf("The sum of numbers form 1 : %d\n%d\n",n,sum(n));
//     return 0;
// }
// int sum(int n) {
//     if (n==1)
//     return 1; 
//     return n+sum(n-1);
// }

// QUES 2 factorial using recursion

// #include <stdio.h>

// int fac(int n);
// int main () {
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",fac(n));
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

// QUES 6 Write a program in C to print the array elements using recursion.
// #include <stdio.h>
// void printArray(int arr[],int n,int idx) {
//     if (idx==n) {
//         return ;
//     }
//     printf("%d ",arr[idx]);
//     printArray(arr,n,idx+1);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("The elements in the array are : \n");
//     printArray(arr,n,0);
//     return 0;
// }

// QUES 7 Write a program in C to count the digits of a given number using recursion.
// #include <stdio.h>
// int countDigits (int n) {
//     if (n==0)
//     return 0;
//     else
//     return 1+countDigits(n/10); 
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     if (n==0)
//     printf("1\n");
//     else 
//     printf("%d\n",countDigits(n));
//     return 0;
// }

// QUES 8 Write a program in C to find the sum of digits of a number using recursion.
// #include <stdio.h>
// int sumDigits(int n) {
//     if (n==0)
//     return 0;
//     else
//     return (n%10)+sumDigits(n/10);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",sumDigits(n));
//     return 0;
// }

// QUES 8 Find sum of first n natural numbers using recursion
// #include <stdio.h>
// int sum(int n) {
//     if (n==0)
//     return 0;
//     return n+sum(n-1);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     int c = sum(n);
//     printf("%d\n",c);
//     return 0;
// }

// QUES 9 Write a program in C to get the largest element of an array using recursion.

// #include <stdio.h>
// int max(int arr[],int n) {
//     if (n==1) {
//         return arr[0];
//     }
//     int m = max(arr,n-1);
//     return (arr[n-1]>m ? arr[n-1]:m);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("largest = %d\n",max(arr,n));
//     return 0;
// }

// QUES 10 reverse no using recursion

// #include <stdio.h>
// int rev = 0;
// int revNo(int n) {
//     if (n==0)
//     return rev;
//     rev = rev*10+(n%10);
//     return revNo(n/10);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     int c = revNo(n);
//     printf("%d\n",c);
//     return 0;
// }

// QUES 11 Power
// #include <stdio.h>

// int power (int x,int y) {
//     if (y==0)
//     return 1;
//     return x*power(x,y-1);
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     printf("%d\n",power(x,y));
//     return 0;
// }

// QUES 12 gcd
// #include <stdio.h>
// int gcd (int a,int b) {
//     if (b==0)
//     return a;
//     return gcd(b,a%b);
// }
// int main () {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d\n",gcd(a,b));
//     return 0;
// }


// #include <stdio.h>
// void swapBalance(int *a,int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     if (x==y){
//         printf("Same balance , no swap needed.");
//     }
//     else if (x<0 || y<0) {
//         printf("Invalid input");
//     }
//     else if (x==0 || y==0) {
//         printf("Zero balance.");
//     }
//     else {
//         swapBalance(&x,&y);
//         printf("after swaping balances = %d %d\n",x,y);
//     }
//     return 0;
// }