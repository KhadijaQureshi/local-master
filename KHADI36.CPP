#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a,b;
cout<<"enter the value a:";
cin>>a;
cout<<"enter the value ofb:";
cin>>b;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"---"<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"a="<<a<<endl;
cout<<"b="<<b;
getch();
return 0;
}