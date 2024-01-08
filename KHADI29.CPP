#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a,b;
cout<<"neter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
char result;
cout<<"enter the output:";
cin>>result;
switch(result)
{
case'+':
cout<<a+b;
break;
case'-':
cout<<a-b;
break;
case'/':
cout<<a/b;
break;
case'*':
cout<<a*b;
break;
case'%':
cout<<a%b;
default:
cout<<"INVALID";
}
getch();
return 0;
}