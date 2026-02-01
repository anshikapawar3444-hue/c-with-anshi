//           Arithmetic operators

// 1. Add two numbers.
// #include <stdio.h>
// int main() {
//     int a , b;
//     scanf("%d %d" ,&a,&b);
//     printf("Sum = %d\n" ,a+b);
//     return 0;
// }

// 2. Remainder of two numbers
// #include <stdio.h>
// int main () {
//     int a , b;
//     scanf("%d %d" , &a ,&b);
//     printf("remainder = %d\n" , a%b);
//     return 0;
// }

// 3. Average of three numbers
// #include <stdio.h>
// int main () {
//     int a,b,c;
//     scanf("%d %d %d" ,&a,&b,&c);
//     printf("Avg = %d\n" , (a+b+c)/3);
//     return 0;    
// }

// 4. Simple Interest
// #include <stdio.h>
// int main () {
//     int p,r,t;
//     scanf("%d %d %d" ,&p,&r,&t);
//     printf("S.I = %d\n" , (p*r*t)/100);
//     return 0;
// }

//               Relational operators
 
// 1. Check equal no.
// #include <stdio.h>
// int main () {
//     int a,b;
//     scanf("%d %d" ,&a,&b);
//     if (a==b) printf("Equal\n");
//     else printf("Not equal\n");
//     return 0;    
// }

// 2. Greater of two numbers
// #include <stdio.h>
// int main () {
//     int a,b;
//     scanf("%d %d" , &a,&b);
//     if (a>b) printf("%d is greater\n" ,a);
//     else printf("%d is greater\n" ,b);
//     return 0;
// }

// 3. Number less than 100
// #include <stdio.h>
// int main () {
//     int a;
//     scanf("%d" ,&a);
//     if (a<100) printf("Less than 100\n");
//     else printf("Not less than 100\n");
//     return 0;
// }

//          Logical operators 
// 1. Number b/w 1 and 100
// #include <stdio.h>
// int main () {
//     int num;
//     scanf("%d" , &num);
//     if (num>0 && num<101) printf("B/w 1 and 100\n");
//     else printf("Not b/w 1 and 100\n");
//     return 0;
// }

// 2. Pass check
// #include <stdio.h>
// int main () {
//     int marks;
//     scanf("%d" ,&marks);
//     if (marks>=40) printf("Pass\n");
//     else printf("Fail\n");
//     return 0;    
// }

// 3. Vowel Check
// #include <stdio.h>
// int main () {
//     char ch;
//     scanf("%c" ,&ch);
//     if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
//     printf("vowel\n");
//     else printf("consonant\n");
//     return 0;    
// }

//           Conditional(Ternary) operator
// 1. Largest of two no.
// #include <stdio.h>
// int main () {
//     int a,b;
//     scanf("%d %d" ,&a,&b);
//     printf("%d\n" , (a>b) ? a:b);
//     return 0 ;
// }

// 2. Even or Odd
// #include <stdio.h>
// int main () {
//     int num;
//     scanf("%d" ,&num);
//     printf("%s\n" , (num%2==0) ? "Even" : "Odd");
//     return 0;
// }

//          Increment / Decrement
// 1. Pre-increment
// #include <stdio.h>
// int main() {
//     int a = 5;
//     printf("%d\n", ++a);
//     return 0;
// }

// 2. Post-increment
// #include <stdio.h>
// int main() {
//     int a = 5;
//     printf("%d\n", a++);
//     return 0;
// }

// 3. Pre-decrement
// #include <stdio.h>
// int main() {
//     int a = 5;
//     printf("%d\n", --a);
//     return 0;
// }

// // 4. Post-decrement
// #include <stdio.h>
// int main() {
//     int a = 5;
//     printf("%d\n", a--);
//     return 0;
// }
