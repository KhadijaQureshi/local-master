#include<iostream.h>
#include<conio.h>
class second
{
private:
int a,b,c;

public:
void input()
{
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
}

void sub()
{
c=a-b;
}

void output()
{
cout<<a<<"-"<<b<<"="<<c;
}
};

int main()
{
clrscr();
second s1;
s1.input();
s1.sub();
s1.output();
getch();
return 0;
}