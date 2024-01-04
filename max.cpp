#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of A:";
    cin>>a;
     cout<<"enter the value of B:";
    cin>>b;
     cout<<"enter the value of C:";
    cin>>c;
if(a>b)
{
    if(a>c)
cout<<"maximum number is:"<<a;
    else
cout<<"maximum number is:"<<c;
}
else
{
    if(b>c)
cout<<"maximum number is:"<<b;
    else
cout<<"maximum number is:"<<c;
}
return 0;
}