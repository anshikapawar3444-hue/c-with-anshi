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

// #include <stdio.h>

// int main () {
//     int arr[3]={10,20,30};
//     int (*p)[3];
//     p =&arr;
//     for (int i=0;i<3;i++) {
//         printf("%d ",(*p)[i]);
//     }
//     return 0;
// }

// expression = meaning
// p = address of array
// *p = entire array
// (*p)[i] = element

// #include <stdio.h>

// int main () {
//     int a=10,b=20,c=30;
//     int *p[3];
//     p[0]=&a;
//     p[1]=&b;
//     p[2]=&c;
//     for (int i=0;i<3;i++) {
//         printf("%d ",*p[i]);
//     }
//     return 0;
// }

// rev array using pointer
// #include <stdio.h>

// int main () {
//     int arr[] = {10,20,30,40,50};
//     int n=5;
//     int *start = arr;
//     int *end = arr+n-1;
//     while (start<end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//         start ++;
//         end--;
//     }
//     printf("rev arr = ");
//     for (int i=0;i<n;i++) {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// find sum using pointer arithmetic
// #include <stdio.h>

// int main () {
//     int arr[]= {5,10,15,20,25};
//     int n =4;
//     int *p=arr;
//     int sum=0;
//     for (int i=0;i<n;i++)  {
//         sum=sum+*(p+i);
//     }
//     printf("%d",sum);
//     return 0;
// }

// diff b/w *p++ and(*p)++
// #include <stdio.h>

// int main () {
//     int arr[] = {10,20,30};
//     int *p = arr;
//     printf("%d\n",*p++);
//     printf("%d\n",*p);
//     int x=5;
//     int *q=&x;
//     printf("%d\n",(*q)++);
//     printf("%d\n",x);
//     return 0;
// }

// array of pointers storing marks
// #include <stdio.h>

// int main () {
//     int m1=85,m2=90,m3=78;
//     int *marks[3];
//     marks[0] = &m1;
//     marks[1] = &m2;
//     marks[2] = &m3;
//     for (int i=0;i<3;i++) {
//         printf("student = %d : %d\n",i+1,*marks[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int *getmax(int *a , int *b){
//     if(*a>*b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     int x= 10,y=20;
//     int *max;
//     max = getmax(&x,&y);
//     printf("%d" , *max);
//     return 0;
// }

// #include <stdio.h>
// int add(int a,int b) {return a+b;}
// int sub(int a,int b) {return a-b;}
// int mul(int a,int b) {return a*b;}
// int div(int a,int b) {return a/b;}
// int main () {
//     int a=10,b=5;
//     int (*fp) (int , int);
//     fp = add;
//     printf("add = %d\n",fp(a,b));
//     fp = sub;
//     printf("sub = %d\n",fp(a,b));
//     fp = mul;
//     printf("mul = %d\n",fp(a,b));
//     fp = div;
//     printf("div = %d\n",fp(a,b));
//     return 0;
// }

