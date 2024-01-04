#include<iostream.h>
#include<conio.h>
class circle
{
private:
double r;

public:
void input();
void area();
void circumference();
};

void circle::input()
{
cout<<"enter radius of circle:";
cin>>r;
}

void circle::area()
{
double ar=3.1415*r*r;
cout<<"area is:"<<ar<<endl;
}

void circle::circumference()
{
double cir=2*3.1415*r;
cout<<"circumeference is:"<<cir;
}

int main()
{
clrscr();
circle s1;
s1.input();
s1.area();
s1.circumference();
getch();
return 0;
}