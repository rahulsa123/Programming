#include<iostream>
#include<conio>
using namespace std;
class integer
{
    int m,n;
public:
    integer(int,int);
    void display()
    {

        cout<<"m="<<m;
        cout<<"n="<<n;
    }

};
integer::integer(int x,inty)
{
    m=x;
    n=y;
}
void main()
{
    clrscr();
    integer int1(10,100);
    integer intz=int1;
    cout<<"object1=";
     int.display();
     getch();
     cout<<"objectz=";
     intz.display();
     getch();

}
