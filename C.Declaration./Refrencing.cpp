#include <iostream.h>
#include <conio.h>
void main( )
{
void show1(int &);
void show2(int &);
int x=10;
clrscr( );
show1(x);
cout<<“x=”<<x<<endl;
getch( );
}
void show2(int & z)
{
z++;
}
void show1(int & y)
{
y++;
show2(y);
}
