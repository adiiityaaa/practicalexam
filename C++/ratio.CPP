#include <iostream.h>
#include <conio.h>

class ratio {
 public:
 int num, den;
 double p;
 void assign(int x, int y);
 void invert();
 void convert();
 void print();
};

void ratio:: assign(int x, int y) {
 num = x;
 den = y;
}

void ratio:: convert() {
 p=(double(num)/double(den));
}

void ratio:: invert() {
 int temp;
 temp = num;
 num = den;
 den = temp;
}

void ratio:: print() {
 cout<<"The Values are: "<<num<<"/"<<den<<endl;
 cout<<"The ratio is: "<<p<<endl;
}

void main() {
 clrscr();
 int x, y;
 cout<<"Enter two numbers: "<<endl;
 cin>>x>>y;
 ratio r;
 r.assign(x, y);
 r.convert();
 r.print();
 cout<<"Inverting the numbers..."<<endl;
 r.invert();
 r.convert();
 r.print();
 getch();
}
