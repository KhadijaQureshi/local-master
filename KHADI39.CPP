#include<iostream.h>
#include<conio.h>
class third
{
private:
int a,b,c,d;
public:
void input()
{
cout<<"enter the value of a:";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
cout<<"enter the value of c:";
cin>>c;
cout<<"enter the value of d:";
cin>>d;
}
void sum()
{
int n;
n=a+b+c+d;
cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<n<<endl;
}
void avg()
{
int g;
g=a+b+c+d/400;
cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"/"<<"400"<<"="<<g;
}
};
int main()
{
clrscr();
third o1;
o1.input();
o1.sum();
o1.avg();
getch();
return 0;
}