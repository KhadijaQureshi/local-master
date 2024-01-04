#include<iostream>
using namespace std;
int main()
{
int num,fact=1;
cout<<"enter number to find its factorial:";
cin>>num;
for(int i=1;i<=num;i++)
{
    fact=fact*i;
}
cout<<"the factorial of"<<" "<<num<<"="<<fact<<endl;
return 0;
}
