#include<iostream.h>
#include<conio.h>
class first
{
private:
int a,b;

public:
void assign()
{
a=5;b=6;
}

int sum()
{
return (a+b);
}
};

int main()
{
clrscr();
first s1;
s1.assign();
int r=s1.sum();
cout<<r;
getch();
return 0;
}
