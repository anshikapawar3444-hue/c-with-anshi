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

