#include<iostream.h>
#include<conio.h>
class demo
{
private:
int x;
public:
demo(int xx)
{
x=xx;
}
friend void display(demo);
};
void display(demo d1)
{
cout<<d1.x;
}
int main()
{
clrscr();
demo d1(5);
display(d1);
getch();
return 0;
}