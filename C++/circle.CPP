#include <iostream.h>
#include <conio.h>

class circle {
 public:
 float r,x,y,a,c;
 void getdata();
 void area();
 void circum();
 void print();
};

void circle:: getdata() {
 cout<<"Enter Radius of circle: "<<endl;
 cin>>r;
 cout<<"Enter X and Y coordinate of circle: "<<endl;
 cin>>x>>y;
}

void circle:: area() {
 a=3.14*r*r;
}

void circle:: circum() {
 c=3.14*r*2;
}

void circle:: print() {
 cout<<x<<"|"<<y<<"|"<<a<<"|"<<c<<endl;
}

void main() {
 clrscr();
 circle c;
 c.getdata();
 c.area();
 c.circum();
 c.print();
 getch();
}