#include<iostream.h>
#include<conio.h>
class score
{
private:
int val;//instance variable
public:
score()//constructor
{
val=0;
}
void operator++()//operator overloading
{
val=val+1;
}
void display()
{
cout<<val<<endl;
}
};
int main()
{
clrscr();
score s1;
++s1;
s1.display();
getch();
return 0;
}