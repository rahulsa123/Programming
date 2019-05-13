#include<iostream>
#include<conio.h>
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
integer::integer(int x,int y)
{
    m=x;
    n=y;
}
int main()
{

    integer int1(10,100);
    integer intz=int1;
    cout<<"object1=";
     int1.display();
     getch();
     cout<<"objectz=";
     intz.display();
     getch();

}

