#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int n,b,nr=0,r,p=1;
cin >> n;
cin >> b;
while(n!=0)
{
r=n%b;
n=n/b;
nr=nr+r*p;
p=p*10;
}
cout << nr;
getch();
}
