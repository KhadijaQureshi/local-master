#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout<<"enter the value of A:";
    cin>>a;
    int rs;
    rs=fabs(a);
    cout<<"fabs("<<a<<") ="<<rs;
    return 0;
}