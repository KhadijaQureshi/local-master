#include<iostream.h>
#include<conio.h>
class eight
{
private:
int a,b;
public:
void input()
{
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the vaue of b:";
cin>>b;
}
void swap()
{
a=a+b;
b=a-b;
a=a-b;
cout<<"a="<<a<<endl;
cout<<"b="<<b;
}
};

int main()
{
clrscr();
eight o1;
o1.input();
o1.swap();
getch();
return 0;
}