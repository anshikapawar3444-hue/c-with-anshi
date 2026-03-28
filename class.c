// #include <stdio.h>
// void swap (int a,int b) {
//     int temp;
//     temp = a;
//     a=b;
//     b=temp;
//     printf("a=%d,b=%d\n",a,b);
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     swap(x,y);
//     return 0;
// }

// #include <stdio.h>
// void swap (int *a,int *b) {
//     int temp ;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     printf("before swap : x=%d,y=%d\n",x,y);
//     swap(&x,&y);
//     printf("after swap : x=%d, y=%d\n",x,y);
//     return 0;
// }

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

// QUES 4 sum of first n natural numbers

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
//     int sumNm1 = sum(n-1);
//     int sumN = sumNm1 + n;
//     return sumN;
// }

// QUES 5 factorial using recursion

// #include <stdio.h>

// int fac(int n);
// int main () {
//     printf("%d\n",fac(5));
//     return 0;
// }
// int fac(int n) {
//     if (n==0)
//     return 1;
//     int facNm1 = fac(n-1);
//     int facN = facNm1 * n;
//     return facN;
// }

// #include <stdio.h>

// int fac(int n);
// int main () {
//     printf("%d\n",fac(5));
//     return 0;
// }
// int fac(int n) {
//     if (n==0)
//     return 1;
//     else 
//     return n*fac(n-1);
// }