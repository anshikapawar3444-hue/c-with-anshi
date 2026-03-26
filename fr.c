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
