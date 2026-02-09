#include<iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    cout<<sizeof(A)<<endl; 
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);
    for (int x: A)
    {
        cout<<x<<" ";
    }

    int a;
    cout<<"Enter the no.  of arra"<<endl;
    cin>>a;
    int B[a];
    for (int i = 0; i < a; i++)
    {
        cout<<"Enter the element "<<i+1<<endl;
        cin>>B[i];
    }
    for (int i = 0; i < a; i++)
    {
        cout<<B[i]<<" ";
    }
     return 0;
}