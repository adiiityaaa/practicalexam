#include <iostream.h>
#include <conio.h>

class ratio {
 public:
 int num, den;
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
 cout<<"The ratio is: "<<num<<"/"<<den<<endl;
}

void ratio:: invert() {
 int temp;
 temp = num;
 num = den;
 den = temp;
}

void ratio:: print() {
 cout<<"Inverting the Values...."<<endl;
 cout<<"Ratio after inverting: "<<num<<"/"<<den<<endl;
}

void main() {
 clrscr();
 int x, y;
 cout<<"Enter two numbers: "<<endl;
 cin>>x>>y;
 ratio r;
 r.assign(x, y);
 r.convert();
 r.invert();
 r.print();
 getch();
}