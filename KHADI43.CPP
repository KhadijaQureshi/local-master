#include<iostream.h>
#include<conio.h>
class seven
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
void swap()
{
c=a;
a=b;
b=c;
cout<<"a="<<a<<endl;
cout<<"b="<<b;
}
};

int main()
{
clrscr();
seven o1;
o1.input();
o1.swap();
getch();
return 0;
}