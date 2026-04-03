// #include<stdio.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int  a = 10;
//     int *p;
//     p = &a;
//     cout<<"value of a is "<<a<<endl;
//     printf("value of a is %d\n",*p);
//     cout<<"address of a is "<<&a<<endl;
//     cout<<"address of a is "<<p<<endl;
// }

//  Array and pointer
// #include<stdio.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int A[5] = {1,2,3,4,5};
//     int *p;
//     p = A; // p = &A[0]

//     for(int i = 0; i < 5; i++){
//         cout<<*p<<" ";
//         p++;
//     }
// }

// pointer and array in heap
// #include<stdio.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int A[5] = {1,2,3,4,5};
//     int *p;
//     p = (int *)malloc(5*sizeof(int)); // p = new int[5] for c++
//     printf("Enter 5 numbers: ");
//     for(int i = 0; i < 5; i++){
//         scanf("%d", &p[i]);
//     }
//     for(int i = 0; i < 5; i++){
//         printf("%d ", p[i]);
//     }
//     free(p); // delete[] p; for c++
//     return 0;
// }

// Checking for memory size of pointer
#include<stdio.h>
#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<"size of integer pointer is "<<sizeof(p1)<<endl;
    cout<<"size of character pointer is "<<sizeof(p2)<<endl;
    cout<<"size of float pointer is "<<sizeof(p3)<<endl;
    cout<<"size of double pointer is "<<sizeof(p4)<<endl;
    cout<<"size of structure pointer is "<<sizeof(p5)<<endl;

    return 0;
}
