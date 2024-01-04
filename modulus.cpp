#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the value of X:";
    cin>>x;
    cout<<"enter the value of Y:";
    cin>>y;
    int result;
    result=x%y;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    cout<<"x%y="<<result;
    return 0;
}