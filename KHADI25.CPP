#include<iostream.h>
#include<conio.h>
class second
{
private:
int a,b;

public:
second(int x,int y)
{
a=x;
b=y;
cout<<a<<" "<<b;
}
};
int main()
{
clrscr();
second o1(34,60);
getch();
return 0;
}