//  functions and recursions
// 1. FUNCTIONS 

// #include <stdio.h>

// void printHello();  // function declaration/prototype

// int main () {  // function call
//     printHello();
//     printHello();
//     return 0;
// }

// void printHello() { // function definition
//     printf("Hello anshika!\n");
// } 

// QUES 1  write a two program in which one print hello and another print goodbye

// #include <stdio.h>
// void printGbye ();
// void helloworld ();
// int main () {
//     printGbye () ;
//     helloworld () ;
//     return 0;
// }
// void printGbye () {
//     printf("GOODBYE\n");
// }
// void helloworld () {
//     printf("Hello World !\n");
// }

// QUES 2 waf that print Namaste if user is Indian and Bonjour if user is French

// #include <stdio.h>
// void printnam();
// void printbon();

// int main () {
//     printf("enter n for INDIAN and b for FRENCH\n");
//     char ch;
//     scanf("%c",&ch);
//     if (ch == 'n') {
//         printnam ();
//     }
//     else {
//         printbon();
//     }
//     return 0;
// }
// void printnam () {
//     printf("Namaste \n");
// }
// void printbon() {
//     printf("Bonjour\n");
// }

// Passing Arguments

// #include <stdio.h>

// int sum (int a,int b);
// int main () {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int s = sum (a,b);
//     printf("%d\n",s);
//     return 0;
// }
// int sum(int a ,int b) {
//     return a+b;
// }

// #include <stdio.h>

// void table(int n);
// int main () {
//     int n;
//     scanf("%d",&n);
//     table (n);  // agrgument/actual parameter 
//     return 0;
// }
// void table(int n) { // parameter/formal parameter 
//     for (int i=1;i<=10;i++) {
//         printf("%d x %d = %d\n" ,n,i,i*n);
//     }
// }

// #include <stdio.h>

// void calPrice (float value);
// int main () {
//     float value = 100;
//     calPrice(value);
//     printf("%.2f\n",value);   // change to parameters in function can't change the value in caliing function. (becoz a copy of argument is passed to the function)
//     return 0;
// }
// void calPrice (float value ) {
//     value = value + (0.18*value);
//     printf("%.2f\n",value);
// }

// QUES 3

// #include <stdio.h>
// #include <math.h>

// void calSquare (int n);
// int main () {
//     int n;
//     scanf("%d",&n);
//     calSquare (n);
//     return 0;
// }
// void calSquare (int n) {
//     n = n*n;
//     printf("%d\n",n);
// }

// QUES 4 waf to calculate area of square,circle,rectangle

// #include <stdio.h>

// float areaS (float side);
// float areaC (float r);
// float areaR (float a,float b);

// int main () {
//     float r = 5;
//     printf("%.2f\n",areaC(r));
//     return 0;
// }

// float areaS(float side) {
//     return side * side;
// }
// float areaC (float r) {
//     return 3.14*(r*r);
// }
// float areaR (float a , float b) {
//     return a*b;
// }

// QUES 5 swap two numbers
// #include <stdio.h>
// void swap (int a ,int b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("after swap = %d %d\n",a,b);
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     printf("before swap = %d %d\n",x,y);
//     swap (x,y);
//     return 0;
// }

// QUES 6 check even and odd
// #include <stdio.h>
// void checkNo(int n) {
//     if (n%2==0)
//     printf("The entered no is even\n");
//     else 
//     printf("The entered no is odd\n");
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     checkNo(n);
//     return 0;
// }

// QUES 7 decimal to binary conversion
// #include <stdio.h>

// void decimalToBinary(int n) {
//     if (n==0) 
//     return ;
//     decimalToBinary(n/2);
//     printf("%d",n%2);
// }
// int main () {
//     int num;
//     scanf("%d",&num);
//     if (num==0)
//     printf("0");
//     else
//     decimalToBinary(num);
//     return 0;
// }

// QUES 8 factorial using function
// #include <stdio.h>
// int fac(int n);
// int main () {
//     int n;
//     scanf("%d",&n);
//     int c = fac(n);
//     printf("%d\n",c);
//     return 0;
// }
// int fac(int n) {
//     int fact=1;
//     for (int i=1;i<=n;i++) {
//         fact *= i;
//     }
//     return fact;
// }

// QUES 9 power of a no.
// #include <stdio.h>
// int power (int a,int b);
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int c = power(x,y);
//     printf("%d\n",c);
//     return 0;
// }
// int power (int a,int b) {
//     int p=1;
//     for (int i=1;i<=b;i++) {
//         p=p*a;
//     }
//     return (p);
// }

// QUES 10 any year entered can help finding leap year
// #include <stdio.h>
// void year(int n) {
//     if (n%4==0 && n%100!=0 || n%400==0) {
//         printf("%d is a leap year",n);
//     }
//     else 
//     printf("%d is not a leap year",n);
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     year(n);
//     return 0;
// }

// QUES 11 Define a function that receives 4 integer values and returns sum, product,average of these numbers.

// #include <stdio.h>
// int sum(int a, int b, int c,int d) {
//     return a+b+c+d;
// }
// int product(int a ,int b,int c,int d) {
//     return a*b*c*d;
// }
// int average(int a,int b,int c,int d) {
//     return (a+b+c+d)/4;
// }
// int main () {
//     int x,y,z,w;
//     scanf("%d %d %d %d",&x,&y,&z,&w);
//     int sum1 = sum(x,y,z,w);
//     int product1 = product(x,y,z,w);
//     int average1 = average(x,y,z,w);
//     printf("%d %d %d",sum1,product1,average1);
//     return 0;
// }

// Call by value and call by reference
// QUES 1 use a fun to add 5 bonus marks using call by value

// #include <stdio.h>
// int marks(int n) {
//     return n+5;
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     int c = marks(n);
//     printf("Marks inside function = %d\n",c);
//     printf("marks outside of function = %d\n",n);
//     return 0;
// }

// QUES 2 find max of two fun

// #include <stdio.h>
// int findMax(int a,int b) {
//     if (a>b)
//     return a;
//     else
//     return b;
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int z = findMax(x,y);
//     printf("%d\n",z);
//     return 0;
// }

// call by reference
// *a = value at address
// &x = address of variable 
// pointer = stores address
// QUES 1 swap two numbers

// #include <stdio.h>
// void swap(int *a,int *b) {
//     int *temp;
//     *temp = *a;
//     *a = *b;
//     *b = *temp;
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     printf("before swap = %d %d\n",x,y);
//     swap(&x,&y);
//     printf("after swap = %d %d\n",x,y);
//     return 0;
// }

// QUES 2 max of two no
// #include <stdio.h>
// int findMax (int *a,int *b) {
//     if (*a>*b)
//     return *a;
//     else
//     return *b;
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int c = findMax(&x,&y);
//     printf("%d\n",c);
//     return 0;
// }

// QUES 12 
// #include <stdio.h>

// float calculateFee(int hours, int type);

// int main() {
//     int hours, type;
//     scanf("%d %d", &hours, &type);
//     float fee = calculateFee(hours, type);
//     printf("%.2f", fee);   
//     return 0;
// }
// float calculateFee(int hours, int type) {
//     float fee = 0;
//     if (hours <= 2) {
//         fee = 0;
//     }
//     else if (hours <= 5) {
//         fee = (hours - 2) * 10;
//     }
//     else {
//         fee = (3 * 10) + (hours - 5) * 20;
//     }
//     if (type == 2) {           
//         fee = fee * 0.5;
//     }
//     else if (type == 3) {     
//         fee = fee * 1.25;
//     }
//     return fee;
// }

// QUES 13 check no is prime or not 
// #include <stdio.h>
// int checkIsPrime (int n) {
//     if (n<=1){
//         return 0;
//     }
//     for (int i=2;i*i<=n;i++) {
//         if (n%i==0)
//         return 0;
//     }
//     return 1;
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     if (checkIsPrime(n)) {
//         printf("Prime\n");
//     }
//     else {
//         printf("Not Prime\n");
//     }
//     return 0;
// }

// QUES 14 alphabet pattern.
// #include <stdio.h>
// void pattern(int n) {
//     for (int i = 0;i<n;i++) {
//         for (int j=i;j<n;j++) {
//             printf("%c",'A'+j);
//         }
//         printf("\n");
//     }
// }
// int main () {
//     int n;
//     scanf("%d",&n);
//     pattern(n);
//     return 0;
// }