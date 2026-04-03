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

// #include <stdio.h>

// int main () {
//     auto int j =1; {
//         auto int j =2;
//         {
//             auto int j =3;
//             printf("%d\n",j);
//         }
//         printf("%d\n",j);
//     }
//     printf("%d",j);
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     // int i;
//     auto char c;
//     // float f;
//     // printf("%d %c %f",i,c,f);
//     printf("%c",c);
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a =0;{
//         int a=10;
//         printf("%d ",a);
//         a++;{
//             a = 20;
//         }
//         {
//             printf(" %d",a);
//             int a=30;
//             {
//                 a++;
//             }
//             printf(" %d",a++);
//         }
//         printf(" %d",a);
//     }
//     return 0;
// }
// #include <stdio.h>
// void in();
// int main () {
//     in();
//     in();
//     in();
//     return 0;
// }
// void in() {
//     auto int i=1;
//     static int j=1;
//     i=i+1;
//     j++;
//     printf("%d %d \n",i,j);
// }

// #include <stdio.h>

// int main () {
//     int a = 10;
//     int *p = &a;
//     printf("value of a = %d\n",a);
//     printf("address of a = %p\n",&a);
//     printf("pointer p = %p\n",p);
//     printf(" %d\n",*p);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 3, *j, **k;

//     j = &i;
//     k = &j;

//     printf("Address of i = %u\n", &i);
//     printf("Address of i = %u\n", j);
//     printf("Address of i = %u\n", *k);

//     printf("Address of j = %u\n", &j);
//     printf("Address of j = %u\n", k);

//     printf("Address of k = %u\n", &k);

//     printf("Value of j = %u\n", j);
//     printf("Value of k = %u\n", k);

//     printf("Value of i = %d\n", i);
//     printf("Value of i = %d\n", *(&i));
//     printf("Value of i = %d\n", *j);
//     printf("Value of i = %d\n", **k);

//     return 0;
// }

// int arr[10];
// int *ptr = arr;
// #include <stdio.h>
// void display(int );
// int main () {
//     int i;
//     int marks [] = {55,66,78,76,5,5,5};
//     for (int i=0;i<=6;i++) 
//     display (marks[i]);
//     return 0;
// }
// void display(int m) {
//     printf("%d\n",m);
// }

// pointers ; increment , decrement ,moves by size of datatype 
// p++,p--
// formula = p+n = current address + (n x sizeof(data_type))
// #include <stdio.h>

// int main () {
//     int a=10,b=20,c=30;
//     int *p;
//     p = &a;
//     printf("%u\n",p);
//     p++;
//     printf("%u\n",p);
//     p--;
//     printf("%u\n",p);
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int arr[] = {1,2,3,4,5,48,59,30};
//     int *j,*k;
//     j = &arr[4];
//     k = (arr+4);
//     if (j==k) 
//     printf("same\n");
//     else
//     printf("diff\n");
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int a =10,b=20;
//     int *p=&a;
//     int *q =&b;
//     int sum = *p+*q;
//     printf("%d\n",sum);
//     return 0;
// }

// #include <stdio.h>

// int main () {
//     int arr[] = {10,20,30};
//     int *p =arr;
//     int *q = arr+2;
//     printf("%d\n",*p+*q);
//     printf("%d\n",*(p+1));
//     printf("%ld",q-p);
//     return 0;
// }

