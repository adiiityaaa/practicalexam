#include <iostream.h>
#include <conio.h>

void main() {
 clrscr();
 float r1,r2,i1,i2,f1,f2;
 cout<<"Enter the real and imaginary part of 1st complex number: "<<endl;
 cin>>r1>>i1;
 cout<<"Enter the real and imaginary part of 2nd complex number: "<<endl;
 cin>>r2>>i2;
 f1=r1+r2;
 f2=i1+i2;
 cout<<"1st Number: "<<r1<<"+"<<i1<<"i"<<endl;
 cout<<"2nd Number: "<<r2<<"+"<<i2<<"i"<<endl;
 cout<<"Sum: "<<f1<<"+"<<f2<<"i"<<endl;
 getch();

}