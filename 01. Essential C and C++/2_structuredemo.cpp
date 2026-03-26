// #include<stdio.h>
// #include<iostream>
// using namespace std;

// struct Rectangle
// {
//     int Length;
//     int Breadth;
// };

// int main()
// {
//     struct Rectangle r1  = {10, 5};
//     printf("%d", sizeof(r1));
//     return 0;
// }


#include<stdio.h>
#include<iostream>
using namespace std;

struct Rectangle
{
    int Length;
    int Breadth;
};

int main()
{
    struct Rectangle r1  = {10, 5};
    r1.Length = 20;
    r1.Breadth = 10;
    cout<<r1.Length<<" "<<r1.Breadth;
    return 0;
}