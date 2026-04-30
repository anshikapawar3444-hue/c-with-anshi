// Array of Pointers
// Means: an array whose elements are pointers.

// Pointer to Array
// Means: one pointer pointing to the entire array.

// Access Array Using Pointer
// Means: Use a normal pointer to access elements of an array.


// ques based on pointers:
// swap two no.
// #include <stdio.h>

// void swap(int *a,int *b) {
//     int temp;
//     temp = *a;
//     *a=*b;
//     *b=temp;
//     printf("%d %d\n", *a,*b);
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     swap(&x,&y);
//     return 0;
// }

// sum of two no.
// #include <stdio.h>

// int main () {
//     int a,b;
//     int *p=&a,*q=&b;
//     scanf("%d %d",&a,&b);
//     printf("%d\n",*p+*q);
//     return 0;
// }

// largest of two no.
// #include <stdio.h>

// int main () {
//     int a,b;
//     int *p=&a,*q=&b;
//     scanf("%d %d",&a,&b);
//     if (*p>*q) {
//         printf("%d is larger\n",*p);
//     }
//     else {
//         printf("%d is larger\n",*q);
//     }
//     return 0;
// }

// rev array using pointers
// #include <stdio.h>

// int main () {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     int *p=a;
//     for (int i=n-1;i>=0;i--) {
//         printf("%d ",*(p+i));
//     }
//     return 0;
// }

// count even no

// #include <stdio.h>

// int main () {
//     int n,e=0;
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0;i<n;i++) {
//         scanf("%d",&a[i]);
//     }
//     int *p=a;
//     for (int i=0;i<n;i++) {
//         if (*(p+i)%2==0) {
//             e++;
//         }
//     }
//     printf("%d",e);
//     return 0;
// }

// #include <stdio.h>
// void printArray(int *p,int n) {
//     for (int i=0;i<n;i++) {
//         printf("%d ",*(p+i));
//     }
// }
// int main () { 
    // int arr[]={1,2,3,4,5};
    // printArray(arr,5);
    // return 0;
// }

// #include <stdio.h>
// int sumArr(int *p,int n) {
//     int sum=0;
//     for (int i=0;i<n;i++) {
//         sum+=*(p+i);
//     }
//     return sum;
// }
// int main () {
//     int arr[]={1,2,3,4,5};
//     printf("%d",sumArr(arr,5));
//     return 0;
// }

// #include <stdio.h>

// void reverse(int *p,int n){
//     int *start=p;
//     int *end=p+n-1;
//     int temp;
//     while(start<end)
//     {
//         temp=*start;
//         *start=*end;
//         *end=temp;

//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     reverse(arr,5);
//     for(int i=0;i<5;i++)
//         printf("%d ",arr[i]);
// }

// access array using pointer
// #include <stdio.h>

// int main () {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     int *p=arr;
//     for (int i=0;i<n;i++) {
//         printf("%d ",*(p+i));
//     }
//     return 0;
// }

// pointer to array 
// #include <stdio.h>

// int main () {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     int (*p)[n]=&arr;
//     for (int i=0;i<n;i++) {
//         printf("%d",(*p)[i]);
//     }
//     return 0;
// }

// array of pointers

// #include <stdio.h>

// int main()
// {
//     int a=10,b=20,c=30;
//     int *arr[3];

//     arr[0]=&a;
//     arr[1]=&b;
//     arr[2]=&c;

//     for(int i=0;i<3;i++)
//         printf("%d ", *arr[i]);

//     return 0;
// }

// function and pointers

// 1. passing pointer to a function (you pass an address of a variable as a argument ) = change original values , efficient for large data and arrays

// #include <stdio.h>
// void swap(int *a,int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     swap(&x,&y);
//     printf("%d %d\n",x,y);
//     return 0;
// }

// 2. returning pointer from a function (function returns an address) 

// #include <stdio.h>
// int* larger(int *a,int *b) {
//     if (*a>*b) {
//         return a;
//     }
//     else {
//         return b;
//     }
// }
// int main () {
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int *p = larger (&x,&y);
//     printf("%d ",*p);
//     return 0;
// }

// void fun(int *p);        // passing pointer
// int* fun();             // returning pointer
// int (*fp)(int,int);     // function pointer