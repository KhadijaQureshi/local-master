#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
class quad_equ
{
private:
double a,b,c;
public:void read();
void cal_rootes();
};
void quad_equ::read()
{
cout<<"coffiecients of quad_equ a b c:";
cin>>a>>b>>c;
}
void quad_equ::cal_rootes()
{
if(a==0)
 {
 cout<<"equations is not quadratic";
 }
else
 {
 double disc;
 disc=b*b-4*a*c;
 if(disc<0)
  cout<<"rootes are imaginary";
else if(disc==0)
 {
 double x=-b/(2*a);
 cout<<"rootes are equal,x="<<x;
 }
else
 {
 double x1,x2,t;
 t=sqrt(disc);
 x1=(-b+t)/(2*a);
 x2=(-b-t)/(2*a);
 cout<<"rootes are real and unequal"<<endl;
 cout<<"x1:"<<x1<<endl;
 cout<<"x2:"<<x2;
 }
}
}

int main()
{
clrscr();
quad_equ q1;
q1.read();
q1.cal_rootes();
getch();
return 0;
}